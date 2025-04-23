// CORSE 7 - PROBLEM 46-CONVERT LINE TO RECORD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
vector<string> SplitString(string S1, string Delim) 
{
    vector<string> vString;
    short pos = 0;
    string sWord;     // define a string variable

    while ((pos = S1.find(Delim)) != std::string::npos)       // use find() function to get the position of the delimiters 
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

sClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);     //cast string to double

    return Client;
}
void PrintClientRecord(sClient Client)
{
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance:" << Client.AccountBalance;

}
int main()
{
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
    cout << "\nLine Record is:\n"; 
    cout << stLine;

    sClient Client = ConvertLineToRecord(stLine);
    PrintClientRecord(Client);

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
