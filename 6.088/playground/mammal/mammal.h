#ifndef MAMMAL_H_
#define MAMMAL_H_

class Mammal {
protected:
  int hp;
  double speed;
public:
  Mammal();
  ~Mammal();
  void breathe();
  virtual void talk();
  virtual void walk() = 0;
};

#endif//MAMMAL_H_
