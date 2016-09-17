#include <iostream>
#include "mammal.h"
#include "dog.h"
#include "cat.h"
#include "human.h"

int main() {
  Human human;
  human.breathe();
  human.talk();
  human.walk();

  Cat cat;
  cat.breathe();
  cat.talk();
  cat.walk();

  Dog dog;
  dog.breathe();
  dog.talk();
  dog.walk();

  return 0;
}
