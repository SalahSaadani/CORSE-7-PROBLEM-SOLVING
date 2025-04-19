// CORSE 7 - PROBLEM 17-NUMBER  EXIST IN MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool IsNumberInMatrix(int Arr[3][3], int Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Arr[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
    int Matrix[3][3] = { {15,84,69},{34,54,12},{13,52,64} };
	cout << "\nThe Matrix :\n";
	PrintMatrix(Matrix, 3, 3);

	int Number;
	cout << "Please Enter The Nunber To look for in Matrix ?\n";
	cin >> Number;

	 if (IsNumberInMatrix(Matrix,Number,3,3))
		 cout << "\nYes it is there.\n";
	 else
		 cout << "\nNo: It's NOT there.\n";
	 
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
