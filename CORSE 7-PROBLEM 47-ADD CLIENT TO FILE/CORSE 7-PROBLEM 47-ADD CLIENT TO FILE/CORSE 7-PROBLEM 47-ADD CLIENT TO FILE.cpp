// CORSE 7-PROBLEM 47-ADD CLIENT TO FILE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
sClient ReadNewClient()
{
    sClient Client;

    cout << "Please Enter Your Account Number ???";
    getline(cin >> ws,Client.AccountNumber);        // Usage of std::ws will extract allthe whitespace character
    cout << "Please Enter Your PinCode ???";
    getline(cin,Client.PinCode);
    cout << "Please Enter Your Name???";
    getline(cin,Client.Name);
    cout << "Please Enter Your Phone???";
    getline(cin,Client.Phone);    
    cout << "Please Enter Your ???";
    cin >> Client.AccountBalance;

    return Client;
}
string ConvertDataToLine(sClient Client, string Seperator = "#//#")
{
    string ClientData = "";

    ClientData += Client.AccountNumber + Seperator;
    ClientData += Client.PinCode + Seperator;
    ClientData += Client.Name + Seperator;
    ClientData += Client.Phone + Seperator;
    ClientData += to_string(Client.AccountBalance);

    return ClientData;
}
void AddDataLineToFile(string FileName, string ClientData)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);
    if (MyFile.is_open())
    {
        MyFile << ClientData << endl;

        MyFile.close();
    }
}
void AddNewClient()
{
    sClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertDataToLine(Client));
}
void AddClient()
{
    char AddMore = 'Y';
    do
    {
        system("cls");
        cout << "\Add New Client:\n\n";

        AddNewClient();

        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}
int main()
{
    AddClient();

    system("pause>0");
    return 0;
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
