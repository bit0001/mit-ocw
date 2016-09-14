#include <iostream>
#include "person.h"
#include <cstring>

Person::Person() {
  m_lastname = "";
  m_first_name[0] = '\0';
}

Person::Person(std::string lastname) {
  m_lastname = lastname;
  m_first_name[0] = '\0';
}
/*
Person::Person(char * first_name) {
  m_lastname = "";
  m_first_name = first_name;
}
*/

Person::Person(std::string lastname, char * first_name) {
  m_lastname = lastname;
  strcpy(m_first_name, first_name);
}

void Person::show() {
  std::cout << "Person: " << m_first_name << " " << m_lastname << std::endl;
}

void Person::show_formally() {
  std::cout << "Person: " << m_lastname << " " << m_first_name << std::endl;
}
