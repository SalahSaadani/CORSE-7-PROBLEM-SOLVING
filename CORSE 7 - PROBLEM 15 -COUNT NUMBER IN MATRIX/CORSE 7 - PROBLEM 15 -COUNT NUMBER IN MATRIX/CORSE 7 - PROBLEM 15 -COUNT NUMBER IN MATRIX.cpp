// CORSE 7 - PROBLEM 15 -COUNT NUMBER IN MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintMatrix(int Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//printf("% 0*d", 2, Arr[i][j]);
			cout << setw(3) << Arr[i][j] << "   ";
		}
		cout << "\n";
	}
}
short CountNumberInMatrix(int Arr[3][3], int Number, short Rows, short Cols)
{
	short CountNumber = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Arr[i][j] == Number)
			{
				CountNumber++;
			}
		}
	}
	return CountNumber;
}

int main()
{
    int Matrix[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
    cout << "\nThe Matrix :\n";
    PrintMatrix(Matrix, 3, 3);

	int Number;
	cout << "Enter The Number To Count In Matrix?? \n";
	cin >> Number;

	cout << "Number " << Number << "Count In Matrix Is :" << CountNumberInMatrix(Matrix, Number, 3, 3) << "\n";
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
