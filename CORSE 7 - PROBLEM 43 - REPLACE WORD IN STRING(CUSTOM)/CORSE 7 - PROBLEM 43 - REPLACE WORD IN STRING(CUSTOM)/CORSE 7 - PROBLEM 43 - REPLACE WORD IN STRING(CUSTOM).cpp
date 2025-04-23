// CORSE 7 - PROBLEM 43 - REPLACE WORD IN STRING(CUSTOM).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;  // define a string variable

    while ((pos = S1.find(Delim)) != std::string::npos)   // use find() function to get the position of the delimiter
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")  
        {    
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    } 
    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string. 
    }
    return vString;
} 
string JoinString(vector<string> vString, string Delim)
{
    string S1;
    for (string& s : vString)
    { 
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string  LowerAllString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    { 
        S1[i] = tolower(S1[i]);
    } 
    return S1;
}
string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
    vector<string> vString = SplitString(S1, " ");

    for (string& s : vString)
    {
        if (MatchCase)
        { 
            if (s == StringToReplace)
            {
                s = ReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            { 
                s = ReplaceTo;
            }
        }
    }
    return JoinString(vString, " ");
}
int main()
{
    string S1 = "Welcome To Algeria , Algeria Is Good Country";
    string StringToReplace = "algeria";
    string ReplaceTo = "Z'goum";

    cout << "\nOrigial String\n" << S1;
    cout << "\n\nReplace with match case: ";  
    cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);

    cout << "\n\nReplace with dont match case: ";  
    cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);

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
