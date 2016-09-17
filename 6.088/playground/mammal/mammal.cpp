#include <iostream>
#include "mammal.h"

Mammal::Mammal() {
  this->hp = 100;
  this->speed = 1.0;
  std::cout << "A mammal is created!" << std::endl;
}

Mammal::~Mammal() {
  std::cout << "A mammal has fallen!" << std::endl;
}

void Mammal::breathe() {
  std::cout << "Breathe in... breathe out" << std::endl;
}

void Mammal::talk() {
  std::cout << "Mammal talk... override this function!" << std::endl;
}
