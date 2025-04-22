// CORSE 7 - PROBLEM 29-COUNT SMALL AND CAPITAL LETTERS.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
enum enWhatToCount {SmallLetters = 0,CapitalLetters = 1,All = 2};

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S1.length();
    }
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
            Counter++;

        if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
            Counter++;
    }


    return Counter;

}
short CountCapitalLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            Counter++;
        }
    }
    return Counter;
}
short CountSmallLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
        {
            Counter++;
        }
    }
    return Counter;
}
int main()
{
    string S1 = ReadString();
    cout << "\nString Length = " << S1.length() << endl;
    cout << "\nCapital Letters Count = " << CountCapitalLetters(S1) << endl;
    cout << "\nSmall Letters Count = " << CountSmallLetters(S1) << endl;

    cout << "\n\nMethod 2 used Enum\n";
    cout << "\nString Length = " << CountLetters(S1) << endl;
    cout << "\nCapital Letters Count= " << CountLetters(S1, enWhatToCount::CapitalLetters) << endl;
    cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters) << endl;

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
