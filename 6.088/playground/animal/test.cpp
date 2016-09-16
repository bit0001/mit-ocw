#include <iostream>
#include "animal.h"

int main() {
  Animal cat;
  cat.eat();
  cat.sleep();
  std::cout << "This is" << cat.get_name() << "empty" << std::endl;
  std::cout << "This is" << cat.get_age() << "empty" << std::endl;

  return 0;
}
