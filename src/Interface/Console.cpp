#include "Console.hpp"

void Console::display (string message) {
  cout << message;
}

string Console::entry() {
  string entry;
  getline(cin, entry);
  return entry;
};