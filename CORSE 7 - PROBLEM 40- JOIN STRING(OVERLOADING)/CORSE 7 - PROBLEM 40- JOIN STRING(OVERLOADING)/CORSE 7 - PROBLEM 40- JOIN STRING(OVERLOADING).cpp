// CORSE 7 - PROBLEM 40- JOIN STRING(OVERLOADING).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string JoinString(string arrString[], short Length, string Delim)
{
    string S1 = "";
    for (short i = 0 ; i < Length; i++)
    {
        S1 = S1 + arrString[i] + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
int main()
{
    vector<string> vString = { "Nidhal","Salah","Maria","Ahmed" };

    string arrString[] = {"Nidhal","Salah","Maria","Ahmed"};

    cout << "\nVector After Join :\n\n";
    cout << JoinString(vString, " ") << endl;

    cout << "\nArray After Join :\n\n";
    cout << JoinString(arrString,4, " ") << endl;
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
