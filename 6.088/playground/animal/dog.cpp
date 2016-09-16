#include <iostream>
#include "dog.h"

Dog::Dog() : Animal() {
  this->is_runner = false;
}

Dog::Dog(std::string name, int age, bool is_runner) : Animal(name, age) {
  this->is_runner = is_runner;
}

void Dog::bark() {
  std::cout << "Wow! Wow!" << std::endl;
}

bool Dog::get_is_runner() {
  return this->is_runner;
}

std::ostream & operator<<(std::ostream & os, const Dog & o) {
  os << (Animal) o << "\nIs runner: " << o.is_runner << std::endl;
  return os;
}
