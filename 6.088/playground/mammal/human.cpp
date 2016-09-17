#include <iostream>
#include "human.h"

Human::Human() {
  std::cout << "A new human is born!" << std::endl;
  this->speed = 2.0;
  this->civilized = true;
}

Human::~Human() {
  std::cout << "Human has died!" << std::endl;
}

void Human::talk() {
  std::cout << "I'm looking for a... human" << std::endl;
}

void Human::walk() {
  std::cout << "Left, right, left, right at the speed "
                "of " << this->speed << std::endl;
}

void Human::attack(Human & human) {
  if (this->civilized) {
    std::cout << "Why would a human attack another?" << std::endl;
    return;
  }
  std::cout << "A human attacks another human!" << std::endl;  
}
