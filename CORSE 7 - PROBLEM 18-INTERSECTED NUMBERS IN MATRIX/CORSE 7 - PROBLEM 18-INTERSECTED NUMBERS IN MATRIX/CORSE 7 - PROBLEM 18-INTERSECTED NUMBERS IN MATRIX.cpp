// CORSE 7 - PROBLEM 18-INTERSECTED NUMBERS IN MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            //printf(" %0*d   ", 2, arr[i][j]);
            cout << setw(3) << arr[i][j] << "     ";
        } 
        cout << "\n";  
    }
}
bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] == Number)
            { 
                return true;
            };
        }
    }  
    return false;
}
void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    int Number;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];

            if (IsNumberInMatrix(Matrix2, Number, 3, 3))
            {
                cout << setw(3) << Number << "    ";
            }
        }
    }
}
int main()
{
    int Matrix1[3][3] = { {77,65,94},{25,01,61},{88,24,69} };
    int Matrix2[3][3] = { {77,65,11},{32,47,61},{88,03,69} };

    cout << "\nMatrix1 : \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2 : \n";
    PrintMatrix(Matrix2, 3, 3);

    cout << "\nThe InterSected Numbers In Two Matrices Are : \n";
    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

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
