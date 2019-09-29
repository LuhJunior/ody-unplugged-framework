#include "Console.hpp"

void Console::show (string message) {
  cout << message;
}

string Console::getUserEntry() {
  string entry;
  getline(cin, entry);
  return entry;
};