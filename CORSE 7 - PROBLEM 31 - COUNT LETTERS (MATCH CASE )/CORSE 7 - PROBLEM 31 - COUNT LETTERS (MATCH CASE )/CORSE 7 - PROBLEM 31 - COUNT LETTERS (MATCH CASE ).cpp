// CORSE 7 - PROBLEM 31 - COUNT LETTERS (MATCH CASE ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String??\n";
    getline(cin, S1);
    return S1;
}
char ReadChar()
{
    char Ch1;
    cout << "Please Enter Your Character??\n";
    cin >> Ch1;
    return Ch1;
}
char InvertLetterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}
short CountCharacterInString(string S1, char Letter,bool MatchCase = true)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter)
                Counter++;
        }
        else
        {
            if (tolower(S1[i]) == tolower(Letter))
                Counter++;
        }
    }
    return Counter;
}
int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\n Letter " << Ch1 << " Count = " << CountCharacterInString(S1, Ch1) << endl;
    cout << "\nLetter \'" << Ch1 << "\' ";
    cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
    cout << " Count = " << CountCharacterInString(S1, Ch1, false);

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
