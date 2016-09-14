#include <iostream>
#include "person.h"

int main() {
  Person one;
  Person two("Naranjo");
  Person three("Noriega", "Hugo");

  one.show();
  one.show_formally();

  two.show();
  two.show_formally();

  three.show();
  three.show_formally();


  return 0;
}
