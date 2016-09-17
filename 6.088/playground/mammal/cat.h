#ifndef CAT_H_
#define CAT_H_

#include "mammal.h"

class Cat : public Mammal {
public:
  Cat();
  ~Cat();
  virtual void talk() override;
  virtual void walk() override;
};

#endif//CAT_H_
