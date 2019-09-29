#include "Menu.hpp"

void Menu::getUserInfo() {
  string nickname = "";
  Console::show("Ola bem vindo ao unplugged game app\n");
  Console::show("Por favor digite seu nickname:\n");
  do {
    nickname = Console::getUserEntry();
    if (nickname == "") Console::show("nickname invalido!\ninsira novamente\n");
  } while (nickname == "");
  Console::show("Obrigado " + nickname + "\n");
}

void Menu::displayMenu() {
  Console::show("###################### Menu de opcoes ######################\n");
  Console::show("games - Jogos Disponiveis.\n");
  Console::show("ranking - Mostrar ranking geral.\n");
  Console::show("loja - loja virtual para troca pontos e comprar itens.\n");
  Console::show("sair - encerrar o app.\n");
  Console::show("############################################################\n");
  Console::show("\n\n>");
}

int Menu::getOption() {
  string option = Console::getUserEntry();
  if (option == "games") return 1;
  else if (option == "ranking") return 2;
  else if (option == "loja") return 3;
  else return -1;
}

void Menu::command() {
  while (true) {
    switch (Menu::getOption()) {
    case 1:
      
      break;
    case 2:
      /* code */
      break;
    case 3:
      /* code */
      break;
    default:
      break;
    }
  }
  
}