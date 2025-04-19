// CORSE 7 - PROBLEM 12 -CHECK  TYPICAL MATRICES.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{ 
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        { 
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
            //cout << setw(3) << arr[i][j] << "     ";
            
        }    
        cout     <<     "\n";   
    }  
} 
bool AreTypicalyMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //Seeds the random number generator in C++, called only once   
     srand((unsigned)time(NULL));

     int Matrix1[3][3], Matrix2[3][3];

     FillMatrixWithRandomNumbers(Matrix1, 3, 3);
     cout << "\nMatrix1:\n"; 
     PrintMatrix(Matrix1, 3, 3);

     FillMatrixWithRandomNumbers(Matrix2, 3, 3);
     cout << "\nMatrix2:\n";
     PrintMatrix(Matrix2, 3, 3);

    if (AreTypicalyMatrices(Matrix1,Matrix2,3,3))
        cout << "\nYES: Both Martices are Typical.";
    else      
        cout << "\nNo: Martices are NOT Typical.";

    system("pause>0");
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
