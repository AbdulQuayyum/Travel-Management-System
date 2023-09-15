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

int Customer::CustomerID;

class Vehicles
{
public:
    int VehicleChoice;
    int Distance;
    static float TransportFee;

    float CalculateTransportFee(float rate)
    {
        cout << "Enter the distance you want to travel: ";
        cin >> Distance;
        TransportFee = rate * Distance;
        return TransportFee;
    }

    void BookVehicle(float rate)
    {
        float fee = CalculateTransportFee(rate);
        cout << "Your total bill is: " << fee << endl;
        cout << "Do you want to book this vehicle? (Y/N): ";
        char Choice;
        cin >> Choice;
        if (Choice == 'Y' || Choice == 'y')
        {
            cout << "Your vehicle is booked" << endl;
            cout << "Go to the main menu to get your reciept" << endl;
            Sleep(100);
        }
        else
        {
            cout << "Thank you for using our services" << endl;
        }
    }

    void VehicleDetails()
    {
        cout << "We are in collaboration with fast, safe and means of transport for your tour" << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "Enter the kind of vehicle you would prefer to travel in: " << endl;
        cout << "1. Bus (1,000.00 ₦/km)" << endl;
        cout << "2. Mahindra Scorpio (1,300.00 ₦/km)" << endl;
        cout << "3. Honda Amaze (1,400.00 ₦/km)" << endl;
        cout << "4. Hyundai Creta (1,500.00 ₦/km)" << endl;
        cout << "5. Maruti Swift (1,600.00 ₦/km)" << endl;
        cout << "6. Volkswagen Vento (1,800.00 ₦/km)" << endl;
        cout << "7. Toyota Quantum (2,000.00 ₦/km)" << endl;
        cout << "8. Rail Travel (1,750.00 ₦/km)" << endl;
        cout << "9. Air Travel (20,000.00 ₦/km)" << endl;
        cout << "10. Water Travel (10,000.00 ₦/km)" << endl;
        cout << "Enter your choice: ";
        cin >> VehicleChoice;

        switch (VehicleChoice)
        {
        case 1:
            BookVehicle(1000.0);
            break;
        case 2:
            BookVehicle(1300.0);
            break;
        case 3:
            BookVehicle(1400.0);
            break;
        case 4:
            BookVehicle(1500.0);
            break;
        case 5:
            BookVehicle(1600.0);
            break;
        case 6:
            BookVehicle(1800.0);
            break;
        case 7:
            BookVehicle(2000.0);
            break;
        case 8:
            BookVehicle(1750.0);
            break;
        case 9:
            BookVehicle(20000.0);
            break;
        case 10:
            BookVehicle(10000.0);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
};

class Booking
{
};

class Receipt
{
};

int main(){};