#include <iostream>

using namespace std;

struct Player {
  string name;
  int hp;


};

int main() {
  // Player m = {"Miguel", 100};
  Player m;
  m.name = "Miguel";
  m.hp = 1000;


  cout << "Name: " << m.name << "\nHP: " << m.hp << endl;
  cout << "Hello, World!" << endl;
  return 0;
}
