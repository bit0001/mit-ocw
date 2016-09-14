#include <iostream>
#include "bank_account.h"

int main() {
  BankAccount david("David J. Malan", 120);
  david.display_information();

  david.deposit(10);
  david.display_information();
  david.withdraw(120);
  david.display_information();
  david.withdraw(20);
  david.display_information();
  david.deposit(-12);
  david.display_information();

  return 0;
}
