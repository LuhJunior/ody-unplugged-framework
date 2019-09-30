#include "Menu.hpp"

void Menu::getPlayerInfo() {
  string nickname = "";
  console.display("Ola bem vindo ao unplugged game app\n\n");
  console.display("Por favor digite seu nickname:\n");
  do {
    nickname = console.entry();
    if (nickname == "") console.display("nickname invalido!\ninsira novamente\n");
  } while (nickname == "");
  loadPlayerMenu(nickname);
}

void Menu::displayMenu() {
  console.display("###################### Menu de opcoes ######################\n");
  console.display("games - Jogos Disponiveis.\n");
  console.display("perfil - Mostrar suas informacoes de progresso.\n");
  console.display("ranking - Mostrar ranking geral.\n");
  console.display("loja - loja virtual para troca pontos e comprar itens.\n");
  console.display("sair - encerrar o app.\n");
  console.display("############################################################\n");
}

int Menu::getOption() {
  string option = console.entry();
  if (option == "games") return 1;
  if (option == "perfil") return 2;
  else if (option == "ranking") return 3;
  else if (option == "loja") return 4;
  else if (option == "sair") return 5;
  else return -1;
}

void Menu::command() {
  string jogo = "";
  Game* game = nullptr;
  displayMenu();
  while (true) {
    console.display("\n>");
    switch (getOption()) {
    case 1:
      console.display("Jogos disponiveis\n");
      console.display(facede.displayGames());
      console.display("Digite o nome do jogo que deseja jogar: \n");
      
      jogo = console.entry();
      game = facede.getGame(jogo);

      if (game == nullptr) console.display("Nome de jogo invalido!\n");
      else {
        while (true) {
          console.display(game->displayChallenges());
          console.display("Digite o numero do desafio ou voltar:\n");
          string entry = console.entry();
          int desafio = entry[0] - '0';
          Desafio d = game->getChoosenChallenge(desafio);
          if (facede.playerInfo.getLevel() >= d.getNivel()) {
            game->play(console, d, facede.playerInfo, facede.gamificacao->getLevelConfig(facede.playerInfo.getLevel()));
          } else {
            console.display("Voce nao possui nivel suficiente para esse desafio");
          }
          console.display("Deseja continuar jogando ? (s/n)\n");
          if (console.entry() == "n") break;
        }
      }
      break;
    case 2:
      console.display(facede.displayPlayer());
      break;
    case 3:
      /* code */
      break;
    case 4:
      console.display(facede.displayLojaItems());
      break;
    case 5:
      exit(0);
      break;
    default:
      break;
    }
  }
  
}

void Menu::init() {
  getPlayerInfo();
  command();
}

bool Menu::loadPlayerMenu(string nickname) {
  this->facede = Facede(nickname);
  if (facede.loadAll()) {
    console.display("Seja bem-vindo de volta\n");
  } else {
    console.display("Seja bem-vindo novo jogador\n");
  }
  return true;
}
