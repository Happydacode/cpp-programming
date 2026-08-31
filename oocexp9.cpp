#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class
class BankAccount {
protected:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string accNo, string name, double initialBalance) {
        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Display basic account details
    void displayDetails() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : Rs. " << fixed << setprecision(2)
             << balance << endl;
    }
};

// Savings Account class
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount(string accNo, string name, double initialBalance,
                   double rate)
        : BankAccount(accNo, name, initialBalance) {
        interestRate = rate;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Calculate and add interest
    void calculateInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest Added: Rs. " << interest << endl;
    }

    // Account statement
    void statement() {
        cout << "\n===== SAVINGS ACCOUNT STATEMENT =====" << endl;
        displayDetails();
        cout << "Interest Rate  : " << interestRate << "%" << endl;
        cout << "=====================================" << endl;
    }
};

// Checking Account class
class CheckingAccount : public BankAccount {
private:
    double transactionFee;

public:
    // Constructor
    CheckingAccount(string accNo, string name, double initialBalance,
                    double fee)
        : BankAccount(accNo, name, initialBalance) {
        transactionFee = fee;
    }

    // Withdraw money with transaction fee
    void withdraw(double amount) {
        double totalAmount = amount + transactionFee;

        if (amount > 0 && totalAmount <= balance) {
            balance -= totalAmount;

            cout << "Withdrawn: Rs. " << amount << endl;
            cout << "Transaction Fee: Rs. " << transactionFee << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Account statement
    void statement() {
        cout << "\n===== CHECKING ACCOUNT STATEMENT =====" << endl;
        displayDetails();
        cout << "Transaction Fee: Rs. " << transactionFee << endl;
        cout << "======================================" << endl;
    }
};

int main() {

    // Creating Savings Account object
    SavingsAccount savings(
        "SA101",
        "Rahul",
        10000,
        5.0
    );

    // Creating Checking Account object
    CheckingAccount checking(
        "CA101",
        "Rahul",
        15000,
        50
    );

    // Savings Account Operations
    cout << "\n--- SAVINGS ACCOUNT ---" << endl;

    savings.deposit(5000);
    savings.withdraw(2000);
    savings.calculateInterest();

    savings.statement();

    // Checking Account Operations
    cout << "\n--- CHECKING ACCOUNT ---" << endl;

    checking.deposit(5000);
    checking.withdraw(3000);

    checking.statement();

    return 0;
}