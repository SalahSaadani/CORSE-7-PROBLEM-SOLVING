// CORSE 7 - PROBLEM 16-CHECK SPARSE MATRIX.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool IsSparseMatrix(int Arr[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;
	return (CountNumberInMatrix(Arr, 0, 3, 3) >= (MatrixSize / 2));
}
int main()
{
	int Matrix[3][3] = { {3,0,12},{5,0,8},{8,0,9} };
	cout << "\nThe Matrix :\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsSparseMatrix(Matrix,3,3))
		cout << "\nYes : It Is Sparse\n";
	else 
		cout <<"No : it is Not Sparse\n";

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
