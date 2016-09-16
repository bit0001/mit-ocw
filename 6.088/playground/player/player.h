#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
private:
  std::string name;
  int hp;
public:
  Player(std::string name, int hp);
  std::string get_name() const;
  int get_hp() const;
  void set_name(std::string name);
  void set_hp(int hp);
};

#endif // PLAYER_H_
