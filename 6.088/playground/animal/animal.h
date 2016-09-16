#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
private:
  std::string name;
  int age;
public:
  Animal();
  Animal(std::string name, int age);
  void eat();
  void sleep();
  std::string get_name();
  int get_age();
  friend std::ostream & operator<<(std::ostream & os, const Animal & o);
};

#endif
