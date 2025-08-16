#include <iostream>

using namespace std;

/**
 * Class: BankAccount
 * A simple class representing a bank account with an integer balance.
 *
 * Features:
 * - Private balance field to encapsulate the account state.
 * - Constructor to initialize the balance.
 * - Method deposit(amount) to increase the balance; rejects non-positive amounts.
 * - Method withdraw(amount) to decrease the balance if sufficient funds available; returns success status.
 * - Method printB() to display the current balance.
 *
 * The main function demonstrates creating an account, depositing money, and withdrawing money with input validation.
 */


class BankAccount {
    int balance;

public:
    BankAccount(int value) {
        balance = value;
    }

    void deposit (int value) {
        if (value > 0)
            balance += value;
        else
            cout << "Deposit amount must be positive!" << endl;
    }

    bool withdraw (int value) {
        if (value > balance)
            return false;
        balance -= value;
        return true;
    }

    void printB () const {
        cout << "Your balance is: " << balance << endl;
    }
};

int main () {
    BankAccount Per_1(500);

    Per_1.deposit(700);
    Per_1.printB();

    int new_amount = -1;
    cout << "Enter the amount to subtract from the balance" << endl;
    while (new_amount <= 0) {
        cin >> new_amount;
        if (new_amount <= 0) {
            cout << "Amount must be positive!" << endl;
        }
    }
    if (Per_1.withdraw(new_amount))
        cout << "Withdrawal is ok!" << endl;
    else
        cout << "Error! Not enough balance." << endl;

    Per_1.printB();


    return 0;
}