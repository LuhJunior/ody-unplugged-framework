#include "Facede.hpp"
#include "../Utils/Tools.hpp"
#include "BinaryArtGame.hpp"

string Facede::displayGame(string gameName) {
  auto it = find_val_if(this->games, [gameName](Game* g) {
    return g->getNome() == gameName;
  });
  return (*it)->display();
}

string Facede::displayGames() {
  string to_display_games = "";
  for (Game* g: this->games) {
    to_display_games += "\n############################################################################\n\n";
    to_display_games += g->display() + "\n";
    to_display_games += "\n############################################################################\n\n";
  }
  return to_display_games;
}

/* string Facede::displayChallenges(string gameName) {
  string to_dysplay_challenges = "";
  auto it = find_val_if(this->games, [gameName](Game g) {
    return g.getNome() == gameName;
  });
  for (Desafio d: it->getDesafios()) {
    to_dysplay_challenges += "\n" + d.displayChallenge();
  }
  return to_dysplay_challenges;
} */

string Facede::displayRanking() {

}

string Facede::displayItems() {

}

int Facede::getChoosenChallenge() {

}

bool Facede::buyItem(PlayerInfo) {

}

void Facede::levelUp() {

}

bool Facede::loadPlayer() {
  return playerInfo.loadPlayer();
}

string Facede::displayPlayer() {
  return playerInfo.display();
}

bool Facede::loadGames() {
  // vector<auto_ptr<Game>> v_games = vector<auto_ptr<Game>>();
  // v_games.push_back(auto_ptr<Game>(new BinaryArtGame()));
  // games = v_games;
  vector<Game *> v_games = vector<Game*>();
  auto binaryArt = new BinaryArtGame();
  binaryArt->loadGame();
  v_games.push_back(binaryArt);
  games = v_games;
  return true;
}

Game* Facede::getGame(string gameName) {
  auto it = find_val_if(this->games, [gameName](Game* g) {
    return g->getNome() == gameName;
  });
  if (it == this->games.end()) return nullptr;
  (*it)->loadGame();
  return *it;
}


bool Facede::loadAll() {
  gamificacao->loadLevelConfig();
  gamificacao->loadOpcoes();
  loja.loadShopItems();
  playerInfo.loadPlayer();
  loadGames();
  return true;
}

string Facede::displayLojaItems() {
  return loja.displayItems();
}
