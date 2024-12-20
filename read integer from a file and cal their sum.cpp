#include <iostream>
#include <stdexcept>  
using namespace std;

 class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

     void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be greater than zero.");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient balance for withdrawal.");
        }
        if (amount > 5000) {  
            throw logic_error("Withdrawal amount exceeds the maximum limit of $5000.");
        }

        balance -= amount;
        cout << "Withdrawal of $" << amount << " successful. Remaining balance: $" << balance << endl;
    }
};

 
int main() {
    BankAccount account(12345, 10000.0); // Account with initial balance of $10,000

    cout << "Initial account details:" << endl;
    account.displayAccount();

    
    double amount;
    while (true) {
        try {
            cout << "\nEnter withdrawal amount (or -1 to exit): ";
            cin >> amount;
            if (amount == -1) {
                cout << "Exiting withdrawal operations." << endl;
                break;
            }
            account.withdraw(amount);
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        } catch (const logic_error& e) {
            cout << "Error: " << e.what() << endl;
        } catch (...) {
            cout << "An unexpected error occurred." << endl;
        }
    }

    return 0;
}