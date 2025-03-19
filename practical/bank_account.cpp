#include <iostream>

using namespace std;

class BankAccount {
 private:
  double balance;

 public:
  BankAccount(double initialBalance = 0) : balance(initialBalance) {}

  void deposit(double amount) {
    balance += amount;
    cout << "Deposit successful. New balance: " << balance << endl;
  }

  void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
      cout << "Insufficient funds." << endl;
    }
  }

  double getBalance() const {
    return balance;
  }
};

int main() {
  BankAccount account(5000);  // Initial balance of 1000

  account.deposit(3600);
  account.withdraw(500);
  cout << "Current balance: " << account.getBalance() << endl;

  return 0;
}
