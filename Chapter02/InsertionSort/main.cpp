#include <iostream>

using namespace std;

void Print_Array(int* a, int length, const char* msg)
{
    cout << msg << endl;
    for(int i = 0; i < length; i++)
    {
        cout << a[i];
        if( i != length - 1)
            cout << ' ';
    }
    cout << endl;
}

void Insertion_Sort(int* a, int length)
{
    for(int j = 1; j < length; j++)
    {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] > key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

void Insertion_Reverse_Sort(int* a, int length)
{
    for(int j = 1; j < length; j++)
    {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] < key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

int main()
{
    int A[6] = {31, 41, 59, 26, 41, 58};
    Print_Array(A, 6, "Before sorting: ");
    Insertion_Sort(A, 6);
    Print_Array(A, 6, "After sorting: ");
    return 0;
}
