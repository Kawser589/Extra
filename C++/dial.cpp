#include<iostream>
#include<string>
using namespace std;
int main()
{
    string number;
    string reciverNumber;
    int pin = 0;
    int cPin;
    double cash = 0;
    double sendCash;
    cout << "==========     Welcome to FUN World    ==========" << endl << endl;
    cout << "Please enter your number: ";
    cin >> number;
    while(number.length() < 11 || number.length() > 11)
    {
        cout << "Invalid number" << endl;
        cout << "Please enter a valid number: ";
        cin >> number;
    }
    cout << "Your number: " << number << endl;
    cout << "Please add some FUN cash: ";
    cin >> cash;
    cout << "Please set a PIN: ";
    cin >> pin;
    while(true)
    {
        int mainOption;
        cout << "----------------"
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
                int bOption;
                cout << " ---------------------------" << endl;
                cout << "|  Welcome to bKash Portal  |" << endl;
                cout << " ---------------------------" << endl;
                cout << "Your bKash Number: " << number << endl;
                cout << endl;
                cout << "bKash" << endl;
                cout << "1. Send Money" << endl;
                cout << "2. Send Money to Non-bKash User" << endl;
                cout << "3. Mobile Recharge" << endl;
                cout << "4. Payment" << endl;
                cout << "5. Cash Out" << endl;
                cout << "6. Pay Bill" << endl;
                cout << "7. Micro Finance" << endl;
                cout << "8. Download bKash App" << endl;
                cout << "9. My bKash" << endl;
                cout << "10. Reset PIN" << endl;
                cout << "11. Add more FUN cash" << endl;
                cout << "0. Exit" << endl;
                cout << "*. Previous" << endl;
                cout << "----------------------------" << endl;
                cout << "Enter option: ";
                cin >> bOption;
                switch(bOption)
                {
                case 1:
                    {
                        int wAt = 0;
                        int cPin;
                        cout << "Enter receiver account number: ";
                        cin >> reciverNumber;
                        cout << "Enter amount: ";
                        cin >> sendCash;
                        if(cash < sendCash)
                        {
                            cout << "Not enough balance. Current Balance: " << cash << endl;
                            break;
                        }
                        cout << "To confirm transaction please Enter PIN: ";
                        cin >> cPin;
                        if(cash >= sendCash)
                        {
                            while(cPin != pin)
                                {
                                    wAt++;
                                    cout << "Wrong PIN. Please enter PIN again: ";
                                    cin >> cPin;
                                    if(wAt > 3)
                                    {
                                        cout << "Auto exit for many wrong attempts" << endl;
                                        break;
                                    }
                                }
                            cash -= sendCash;
                            cout << "Transaction successful... New balance: " << cash << endl;
                        }
                        break;
                    }
                case 2:
                    {
                        break;
                    }
                case 3:
                    {
                        break;
                    }
                case 4:
                    {
                        break;
                    }
                    break;
                }
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
