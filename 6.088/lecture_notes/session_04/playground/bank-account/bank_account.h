#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount {
private:
  std::string m_name;
  double m_balance;
public:
  BankAccount();
  BankAccount(std::string name, double balance);
  void display_information();
  void deposit(double amount);
  void withdraw(double amount);
};

#endif
