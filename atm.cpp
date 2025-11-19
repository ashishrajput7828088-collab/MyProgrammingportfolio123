#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    float balance = 10000;  // initial balance
    float amount;

    // Login system
    cout << "Enter your ATM PIN: ";
    cin >> pin;

    if(pin != 1234) {
        cout << "Incorrect PIN! Access Denied.";
        return 0;
    }

    do {
        cout << "\n\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Your Balance: ₹" << balance;
                break;

            case 2:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                balance += amount;
                cout << "Deposited Successfully!";
                break;

            case 3:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;

                if(amount > balance)
                    cout << "Insufficient Balance!";
                else {
                    balance -= amount;
                    cout << "Withdraw Successful!";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
