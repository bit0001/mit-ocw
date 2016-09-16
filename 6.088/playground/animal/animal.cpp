#include <iostream>
#include "animal.h"

void Animal::eat() {
  std::cout << "Eating..." << std::endl;
}

void Animal::sleep() {
  std::cout << "Zzzz..." << std::endl;
}

std::string Animal::get_name() {
  return this->name;
}

int Animal::get_age() {
  return age;
}

Animal::Animal() {}
