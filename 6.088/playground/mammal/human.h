#ifndef HUMAN_H_
#define HUMAN_H_

#include "mammal.h"

class Human : public Mammal {
private:
  bool civilized;
public:
  Human();
  ~Human();
  virtual void talk() override;
  virtual void walk() override;
  void attack(Human & human);
};


#endif//HUMAN_H_
