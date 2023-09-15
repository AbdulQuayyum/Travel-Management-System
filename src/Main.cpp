#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customer
{
public:
    string CustomerName, CustomerGender, CustomerAddress;
    int CustomerAge, CustomerPhoneNumber;
    static int CustomerID;
    char all[100];
    void GetCustomerInformation()
    {
        // Open file
        ofstream out("OldCustomers.txt", ios::app); // ios::app is used to append th file
        {
            cout << "Enter Customer Identification Number: ";
            cin >> CustomerID;
            cout << "Enter Customer Name: ";
            cin >> CustomerName;
            cout << "Enter Customer Age: ";
            cin >> CustomerAge;
            cout << "Enter Customer Gender: ";
            cin >> CustomerGender;
            cout << "Enter Customer Phone Numbwer: ";
            cin >> CustomerPhoneNumber;
            cout << "Enter Customer Address: ";
            cin >> CustomerAddress;
        }
        out << "\nCustomer ID: " << CustomerID << "\nCustomer's Name: " << CustomerName << "\nCustomer's Age: " << CustomerAge << "\nCustomer's Gender: " << CustomerGender << "\nCustomer's Phone Number: " << CustomerPhoneNumber << "\nCustomer's Address: " << CustomerAddress << endl;
        out.close();
        cout << "Customer's Information was saved successfully!" << endl;
        cout << "We have saved your information for future usage!" << endl;
    }
    void ShowCustomerInformation()
    {
        ifstream in("OldCustomers.txt");
        {
            if (!in)
            {
                cout << "File was not found" << endl;
                exit(1);
            }
            while (!in.eof())
            {
                in.getline(all, 100);
                cout << all << endl;
            }
            in.close();
        };
    };
};