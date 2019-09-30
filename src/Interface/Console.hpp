#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <string>

using namespace std;

class Console {
public:
  Console () {}

  void display(string);
  string entry();
};

#endif // CONSOLE_H
