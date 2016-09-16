#include <iostream>
#include "animal.h"

Animal::Animal() {
  this->name = "";
  this->age = 0;
}

Animal::Animal(std::string name, int age) {
  this->name = name;
  this->age = age;
}


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

std::ostream & operator<<(std::ostream & os, const Animal & o) {
  os << "Name: " << o.name << "\nAge: " << o.age << std::endl;
  return os;
}
