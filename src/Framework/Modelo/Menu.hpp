#ifndef MENU_H
#define MENU_H

#include "../Interface/Console.hpp"
#include "Facede.hpp"

class Menu {
public:

  Menu () {}

  Menu (string nickname) {
    this->console = Console();
    this->facede = Facede(nickname);
  }

  Menu (Facede facede) {
    this->console = Console();
    this->facede = facede;
  }

  void getPlayerInfo();
  void displayMenu();
  int getOption();
  void command();
  void init();
  bool loadPlayerMenu(string);

private:
  Console console;
  Facede facede;
};

#endif // MENU_H
