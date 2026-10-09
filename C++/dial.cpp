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
        cout << "----------------" << endl;
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
                        double sendCash;
                        cout << "Enter receiver account number: ";
                        cin >> reciverNumber;
                        cout << "Enter amount: ";
                        cin >> sendCash;
                        if(cash < sendCash)
                        {
                            cout << "Not enough balance. Current Balance: " << cash << endl;
                            break;
                        }
                        else
                        {
                            cout << "To confirm transaction please Enter PIN: ";
                            cin >> cPin;
                            while(cPin != pin)
                                {
                                    wAt++;
                                    cout << "Wrong PIN. Please enter PIN again: ";
                                    cin >> cPin;
                                    if(wAt >= 2)
                                    {
                                        cout << "Auto exit for many wrong attempts" << endl;
                                        break;
                                    }
                                    if(cPin == pin)
                                    {
                                        cash -= sendCash;
                                        cout << "Transaction successful... New balance: " << cash << endl;
                                    }
                                }
                                break;
                        }
                        break;
                    }
                case 2:
                    {
                        break;
                    }
                case 3:
                    {
                        int opt;
                        int wAt = 0;
                        int rPin;
                        int rAm;
                        cout << "1. Own number (" << number << ")" << endl;
                        cout << "2. New number" << endl;
                        cout << "0. Back" << endl;
                        cin >> opt;
                        switch(opt)
                        {
                        case 1:
                            {
                                cout << "Account number: " << number << endl;
                                cout << "Please enter amount: ";
                                cin >> rAm;
                                if(rAm > cash)
                                {
                                    cout << "Not enough balance";
                                    break;
                                }
                                else
                                {
                                    cout << "Enter PIN to confirm: ";
                                    cin >> rPin;
                                    while(rPin != pin)
                                    {
                                        wAt++;
                                        cout << "Wrong PIN. Please enter PIN again: ";
                                        cin >> rPin;
                                        if(wAt > 3)
                                        {
                                            cout << "Many wrong attempts." << endl;
                                            break;
                                        }
                                    }
                                    cash -= rAm;
                                    cout << "Recharge successful. Current new balance: " << cash << endl;
                                }
                                break;
                            }
                        case 2:
                            {
                                string num;
                                cout << "Account number: ";
                                cin >> num;
                                cout << "Please enter amount: ";
                                cin >> rAm;
                                if(rAm > cash)
                                {
                                    cout << "Not enough balance";
                                    break;
                                }
                                else
                                {
                                    cout << "Enter PIN to confirm: ";
                                    cin >> rPin;
                                    while(rPin != pin)
                                    {
                                        wAt++;
                                        cout << "Wrong PIN. Please enter PIN again: ";
                                        cin >> rPin;
                                        if(wAt > 3)
                                        {
                                            cout << "Many wrong attempts." << endl;
                                            break;
                                        }
                                    }
                                    cash -= rAm;
                                    cout << "Recharge successful. Current new balance: " << cash << endl;
                                }
                                break;
                            }
                        case 0:
                            {
                                break;
                            }
                        default:
                            {
                                cout << "Invalid input" << endl;
                                break;
                            }
                        }
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
