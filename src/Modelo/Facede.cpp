#include "Facede.hpp"
#include "../Utils/Tools.hpp"

string Facede::displayGame(string gameName) {
  auto it = find_val_if(this->games, [gameName](Game g) {
    return g.nome == gameName;
  });
}

string Facede::displayChallenges() {
  this->games
}

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


