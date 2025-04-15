// CORSE 7 - PROBLEM 7 - TRAPOSE MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void FillMatrixWithOrderedNumbers(int Arr[3][3], short Rows, short Cols)
{
    short Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            Arr[i][j] = Counter;
        }
    }
}
void PrintMatrix(int Arr[3][3], short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << Arr[i][j] << "   ";
        }
        cout << "\n";
    }
}
void TrasposeMatrix(int Arr[3][3], int ArrTransposed[3][3], short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            ArrTransposed[i][j] = Arr[j][i];
        }
    }
}
int main()
{
    int Arr[3][3], ArrTransposed[3][3];
    FillMatrixWithOrderedNumbers(Arr, 3, 3);

    cout << "\nThe following is a 3x3 ordered matrix:\n\n";
    PrintMatrix(Arr, 3, 3);

    TrasposeMatrix(Arr, ArrTransposed, 3, 3);

    cout << "\n\nThe following is the transposed matrix:\n";
    PrintMatrix(ArrTransposed, 3, 3);
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
