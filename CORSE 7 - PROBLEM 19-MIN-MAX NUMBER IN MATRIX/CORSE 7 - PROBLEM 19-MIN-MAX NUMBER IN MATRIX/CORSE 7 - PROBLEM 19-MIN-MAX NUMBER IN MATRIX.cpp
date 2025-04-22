// CORSE 7 - PROBLEM 19-MIN-MAX NUMBER IN MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintMatrix1(int Arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        { 
            //printf(" %0*d   ", 2, arr[i][j]);
            cout << setw(3) << Arr[i][j] << "     ";
        }  
        cout << "\n"; 
    }
} 
int MinNumberInMatrix(int Arr[3][3], short Rows, short Cols)
{
    int Min = Arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Arr[i][j] < Min)
            {
                Min = Arr[i][j];
            }
        }
    }
    return Min;
}
int MaxNumberInMatrix(int Arr[3][3], short Rows, short Cols)
{
    int Max = Arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Arr[i][j] > Max)
            {
                Max = Arr[i][j];
            }
        }
    }
    return Max;
}

int main()
{
    int Matrix1[3][3] = { {14,55,98},{01,64,83},{28,67,19} };
    PrintMatrix1(Matrix1, 3, 3);

    cout << "\nMinimum Number is :" << (MinNumberInMatrix(Matrix1, 3, 3)) << endl;
    cout << "\nMaximum Number is :" << (MaxNumberInMatrix(Matrix1, 3, 3)) << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
