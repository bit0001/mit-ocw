#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
private:
  bool is_runner;
public:
  Dog();
  Dog(std::string name, int age, bool is_runner);
  void bark();
  bool get_is_runner();
  friend std::ostream & operator<<(std::ostream & os, const Dog & o);
};

#endif
