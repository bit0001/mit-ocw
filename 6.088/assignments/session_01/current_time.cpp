#include <iostream>
#include <ctime>
#include "current_time.h"

#define BUFFER_LENGTH 80

void print_current_time()
{
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[BUFFER_LENGTH];

  time(&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer,BUFFER_LENGTH,"%d-%m-%Y %I:%M:%S\n",timeinfo);
  std::string str(buffer);

  std::cout << str;
}
