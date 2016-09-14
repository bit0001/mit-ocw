#include <iostream>
#include "bank_account.h"

BankAccount::BankAccount() {
  m_name = "";
  m_balance = 0.00;
}

BankAccount::BankAccount(string name, double balance) {
  m_name = name;
  m_balance = balance;
}

void BankAccount::display_information() {
  std::cout << "Name: " << m_name << std::endl;
  std::cout << "Balance: " << m_balance << std::endl;
}

void BankAccount::deposit(double amount) {
  if (amount > 0) {
    m_balance += amount;
  }
}

void BankAccount::withdraw(double amount) {
  if (m_balance >= amount) {
    m_balance -= amount;
  }
}
