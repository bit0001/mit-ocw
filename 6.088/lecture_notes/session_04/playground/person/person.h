#ifndef PERSON_H
#define PERSON_H

class Person {
private:
  static const int LIMIT = 25;
  std::string m_lastname;
  char m_first_name[LIMIT];

public:
  Person();
  Person(std::string lastname);
  Person(std::string lastname, char * first_name);
  void show();
  void show_formally();
};

#endif
