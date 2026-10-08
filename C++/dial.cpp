#include<iostream>
#include<string>
using namespace std;
int main()
{
    string number;
    int pin;
    double cash = 0;
    cout << "Please enter your number: ";
    cin >> number;
    while(number.length() < 11 || number.length() > 11)
    {
        cout << "Invalid number" << endl;
        cout << "Please enter a valid number: ";
        cin >> number;
    }
    cout << "Your number: " << number << endl;
    cout << "Please set a PIN: ";
    cin >> pin;
    while(true)
    {
        int mainOption;
        cout << "1. Dial *247#" << endl;
        cout << "2. Dial *121#" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------" << endl;
        cout << "Enter option: ";
        cin >> mainOption;

        switch(mainOption)
        {
        case 1:
            {
                cout << " ---------------------------" << endl;
                cout << "|  Welcome to bKash Portal  |" << endl;
                cout << " ---------------------------" << endl;
                cout << "Your Phone Number: " << number << endl;
                cout << endl;
                cout << "bKash" << endl;
                cout << "1. Send Money" << endl;
                cout << "2. Send Money to Non-bKash User" << endl;
                cout << "3. Mobile Recharge" << endl;

                break;
            }
        case 2:
            {
                cout << " ---------------------------" << endl;
                cout << "| Welcome to Online Support |" << endl;
                cout << " ---------------------------" << endl;

                break;
            }
        case 0:
            return 0;
        default:
            {
                cout << "Something went wrong. Please try again" << endl;
                break;
            }
        }
    }
}
