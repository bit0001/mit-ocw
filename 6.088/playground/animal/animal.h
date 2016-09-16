#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
private:
  std::string name;
  int age;
public:
  void eat();
  void sleep();
  std::string get_name();
  int get_age();
};

#endif
