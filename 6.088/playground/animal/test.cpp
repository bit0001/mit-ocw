#include <iostream>
#include "animal.h"
#include "dog.h"

int main() {
  Animal cat;
  cat.eat();
  cat.sleep();
  std::cout << "This is" << cat.get_name() << "empty" << std::endl;
  std::cout << "This is" << cat.get_age() << "empty" << std::endl;
  std::cout << cat << std::endl;

  Dog beagle("Dog", 9, true);
  beagle.bark();
  beagle.eat();
  std::cout << "This is" << beagle.get_age() << "empty" << std::endl;
  std::cout << "This is" << beagle.get_is_runner() << "empty" << std::endl;
  std::cout << beagle << std::endl;

  return 0;
}
