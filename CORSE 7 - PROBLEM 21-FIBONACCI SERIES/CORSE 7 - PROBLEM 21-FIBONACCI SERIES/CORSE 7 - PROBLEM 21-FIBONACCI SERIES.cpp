// CORSE 7 - PROBLEM 21-FIBONACCI SERIES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    int FebNumber = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << "1  ";

    for (short i = 2; i <= Number; i++)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
    cout << "\n";
}

int main()
{
    PrintFibonacciUsingLoop(10);
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
