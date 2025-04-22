// CORSE 7 - PROBLEM 27-INVERT CHARACTER CASE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

char ReadChar()
{
    char Char1;
    cout << "Please Enter Your Character??\n";
    cin >> Char1;
    return Char1;
}
char InvertLetterCase(char Char1)
{
    return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}

int main()
{
    char Ch1 = ReadChar();
    cout << "\nChar After Inverting Case :\n";
    Ch1 = InvertLetterCase(Ch1);
    cout << Ch1 << endl;
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
