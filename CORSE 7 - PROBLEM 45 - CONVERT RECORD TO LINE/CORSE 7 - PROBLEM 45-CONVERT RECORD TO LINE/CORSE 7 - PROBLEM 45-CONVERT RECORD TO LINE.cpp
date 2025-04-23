// CORSE 7 - PROBLEM 45-CONVERT RECORD TO LINE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct stClientInfo
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

stClientInfo ReadNewClient()
{
    stClientInfo ClientInfo;

    cout << "Please Enter Your Account Number??" << endl;
    getline(cin, ClientInfo.AccountNumber);
    cout << "Please Enter Your Pin Code??" << endl;
    getline(cin, ClientInfo.PinCode);
    cout << "Please Enter Your Name??" << endl;
    getline(cin, ClientInfo.Name);
    cout << "Please Enter Your Number Phone??" << endl;
    getline(cin, ClientInfo.Phone);
    cout << "Please Enter Your Account Balance??" << endl;
    cin >> ClientInfo.AccountBalance;

    return ClientInfo;
}
string ConvertRecordToLine(stClientInfo ClientInfo, string Separator ="#//#")
{
    string stClientRecord= " ";

    stClientRecord += ClientInfo.AccountNumber + Separator;
    stClientRecord += ClientInfo.PinCode + Separator;
    stClientRecord += ClientInfo.Name + Separator;
    stClientRecord += ClientInfo.Phone + Separator;
    stClientRecord += to_string(ClientInfo.AccountBalance);

    return stClientRecord;
}
int main()
{
    cout << "\nPlease Enter Client Data??\n";
    stClientInfo ClientInfo;
    ClientInfo = ReadNewClient();

    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(ClientInfo) << endl;
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
