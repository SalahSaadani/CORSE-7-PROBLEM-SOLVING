// CORSE 7 - PROBLEM 11 -CHECK MATRICES EQUALITY.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void FillArrayWithRandomNumber(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d   ", 2, Matrix[i][j]);
			//cout << setw(3) << Matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}
short SumOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}
bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
}
int main()
{
	// Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];
	FillArrayWithRandomNumber(Matrix1, 3, 3);
	cout << " The Matrix 1 :\n\n";
	PrintMatrix(Matrix1, 3, 3);

	FillArrayWithRandomNumber(Matrix2, 3, 3);
	cout << " The Matrix 2 :\n\n";
	PrintMatrix(Matrix2, 3, 3);

	if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
		cout << " \nYES: both martices are equal.\n";
	else   
		cout << "\nNo: martices are NOT equal.\n";

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
