#include <iostream>

using namespace std;

void PrintBinaryArray(int* a, int length)
{
    for(int i = length - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}

int* Binary_Array_Add(int* A, int* B, int length)
{
    int* C = new int[length+1];
    for(int i = 0; i < length+1; i++)
    {
        C[i] = 0;
    }
    int temp = 0;

    for(int i = 0; i < length; i++)
    {
        temp = temp + A[i] + B[i];
        C[i] = temp > 1 ? temp - 2 : temp;
        temp = temp > 1 ? 1 : 0;
    }
    C[length] = temp;
    return C;
}

int main()
{
    int A[8] = { 1, 0, 1, 0, 1, 1, 0, 1};
    int B[8] = { 0, 1, 1, 0, 0, 1, 1, 1};
    cout << "A:  ";
    PrintBinaryArray(A, 8);
    cout << "B:  ";
    PrintBinaryArray(B, 8);

    int* C = Binary_Array_Add(A, B, 8);
    cout << "C: ";
    PrintBinaryArray(C, 9);
    delete [] C;

    return 0;
}
