#include <iostream>
#include "cat.h"

Cat::Cat() {
  std::cout << "A cat is born!" << std::endl;
}

Cat::~Cat() {
  std::cout << "The cat has died!" << std::endl;
}

void Cat::talk() {
  std::cout << "Meow!" << std::endl;
}

void Cat::walk() {
  std::cout << "Left front paw and back right paw, "
                "righ front paw and back left paw... "
                "at the speed of " << speed << std::endl;
}
