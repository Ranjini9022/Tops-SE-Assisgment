/* 6. Introduction to Object-Oriented Programming
2. Class for Bank Account
Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        } else {
            balance = initialBalance;
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to check current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance
    BankAccount myAccount(1000.0);

    // Perform some transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0); // Should show insufficient balance

    // Display final balance
    cout << "Current Balance: " << myAccount.getBalance() << endl;

}

