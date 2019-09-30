#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <string>

using namespace std;

class Console {
public:
  Console () {}

  virtual void display(string) = 0;
  virtual string entry() = 0;
};

#endif // CONSOLE_H
