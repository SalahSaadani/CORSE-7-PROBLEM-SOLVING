// CORSE 7 - PROBLEM 04 - SUM EACH COL IN MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillMatrixWithRandomNumber(int Array[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Array[i][j] = RandomNumber(1, 100);
        }
    }
}
void PrintMatrix(int Array[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Array[i][j] << "    ";
        }
        cout << "\n\n";
    }
}
int ColSum(int Array[3][3], short Rows, short ColNumber)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        Sum += Array[i][ColNumber];
    }
    return Sum;
}
void PrintEachColSum(int Array[3][3], short Rows, short Cols)
{
    cout << "The Following Are The Sum Of Each Col In The Matrix : \n\n";
    for (short j = 0; j < Cols; j++)
    {
        cout << "Col " << j + 1 << " Sum = " << ColSum(Array, Rows, j) << "\n\n";

    }
}
int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL)); 

    int Array[3][3];

    FillMatrixWithRandomNumber(Array, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n\n";

    PrintMatrix(Array, 3, 3);

    PrintEachColSum(Array, 3, 3);
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
