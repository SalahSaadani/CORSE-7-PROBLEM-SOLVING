// CORSE 7- PROBLEM 44 - REMOVE PUNCTUATIONS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string RemovePunctuationsFromString(string S1)
{
    string S2 = "";
    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }

    }
    return S2;
}

int main()
{
    string S1 = "Welcome To Algeria ,Algeria Is a Nice Country ; It's Amazing";

    cout << "\nOrigial String\n" << S1;
    cout << "\n\nPauncuations Removed:\n" << RemovePunctuationsFromString(S1);

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
