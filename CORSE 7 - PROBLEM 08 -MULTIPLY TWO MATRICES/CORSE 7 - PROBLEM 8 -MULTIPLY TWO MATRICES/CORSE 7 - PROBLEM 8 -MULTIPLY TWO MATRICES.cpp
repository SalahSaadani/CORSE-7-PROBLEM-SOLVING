// CORSE 7 - PROBLEM 8 -MULTIPLY TWO MATRICES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{ 
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumber(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix1[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout <<setw(3) << Matrix1[i][j] << "   ";
		}
		cout << "\n";
	}
}
void MultiplyMatrices(int Matrix1[3][3], int Matrix2[3][3], int MatrixResult[3][3], short Rows, short Cols)
{
	for (short i = 1; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}

}
int main()
{
	// Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];

	FillArrayWithRandomNumber(Matrix1, 3, 3);
	cout << " The Matrix 1 :\n\n";
	PrintMatrix(Matrix1, 3, 3);

	FillArrayWithRandomNumber(Matrix2, 3, 3);
	cout << " The Matrix 2 :\n\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrices(Matrix1, Matrix2, MatrixResult, 3, 3);
	cout << " The Result :\n\n";
	PrintMatrix(MatrixResult, 3, 3);
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
