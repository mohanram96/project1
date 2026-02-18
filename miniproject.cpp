#include <iostream>
class BankAccount {
protected:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string n, int accNo, double bal)
        : BankAccount(n, accNo, bal) {}
};

int main() {
    string name;
    int accNo;
    double bal;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> acc