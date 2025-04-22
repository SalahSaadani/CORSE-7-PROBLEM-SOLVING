// CORSE 7 - PROBLEM 32- IS VOWEL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

char ReadChar()
{
    char Ch1;
    cout << "Please Enter Your Character??\n";
    cin >> Ch1;
    return Ch1;
}
bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);
    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}
int main()
{
    char Ch1 = ReadChar();
    if (IsVowel(Ch1))
        cout << "\nYes,The Letter " << Ch1 << " Is Vowel\n";
    else
        cout << "\nNo,The Letter " << Ch1 << " Is Not Vowel\n";
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
