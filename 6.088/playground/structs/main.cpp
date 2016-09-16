#include <iostream>

using namespace std;

struct Armor {
  string name;
  int armor_class;
  double durability;
};


struct Player {
  string name;
  int hp;
  Armor armor;

  Player() {
    this->name = "Miguel";
    this->hp = 1000;
    this->armor.name = "Magic Shield";
    this->armor.armor_class = 70;
    this->armor.durability = 1000.0;
  }

  void damage(int amount) {
    if (armor.armor_class < amount) {
      this->hp -= (amount - armor.armor_class);
    }
  }

  void recover(int amount) {
    this->hp += amount;
  }

};

int main() {
  // Player m = {"Miguel", 100};
  Player m;

  m.damage(100);
  m.recover(2100);


  cout << "Name: " << m.name << "\nHP: " << m.hp << endl;
  cout << "Hello, World!" << endl;
  cout << m.armor.armor_class << endl;
  return 0;
}
