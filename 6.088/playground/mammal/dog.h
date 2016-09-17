#ifndef DOG_H_
#define DOG_H_

#include "mammal.h"

class Dog : public Mammal {
public:
  Dog();
  ~Dog();
  virtual void talk() override;
  virtual void walk() override;
};


#endif//DOG_H_
