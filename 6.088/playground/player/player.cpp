#include <iostream>
#include "player.h"

Player::Player(std::string name, int hp) {
  this->name = name;
  this->hp = hp;
}

std::string Player::get_name() const {
  return this->name;
}

int Player::get_hp() const {
  return this->hp;
}

void Player::set_name(std::string name) {
  this->name = name;
}

void Player::set_hp(int hp) {
  if (hp >= 0) {
    this->hp = hp;
  }
}
