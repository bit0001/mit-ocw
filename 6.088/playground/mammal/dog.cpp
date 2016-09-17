#include <iostream>
#include "dog.h"

Dog::Dog() {
  std::cout << "A dog is born!" << std::endl;
}

Dog::~Dog() {
  std::cout << "The dog died" << std::endl;
}

void Dog::talk() {
  std::cout << "Woof!" << std::endl;
}

void Dog::walk() {
  std::cout << "Left front paw and back right paw, "
                "right front paw and back left paw.. "
                "at the speed of " << speed << std::endl;
}
