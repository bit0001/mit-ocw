#include <iostream>
#include "player.h"

int main() {
  Player chim("Chim", 100);

  std::cout << chim.get_name() << std::endl;
  std::cout << chim.get_hp() << std::endl;

  chim.set_name("Chim Heck");
  chim.set_hp(200);

  std::cout << chim.get_name() << std::endl;
  std::cout << chim.get_hp() << std::endl;

  chim.set_hp(-100);
  std::cout << chim.get_hp() << std::endl;

  chim.set_hp(0);
  std::cout << chim.get_hp() << std::endl;

  return 0;
}
