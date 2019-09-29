#include "Game.hpp"
#include "../Utils/Tools.hpp"

string Game::displayChallenges() {
  return "";
}

Desafio Game::getChoosenChallenge(int desafioNum) {
  auto it = find_val_if(this->desafios, [desafioNum](Desafio d) {
    return d.getNumero() == desafioNum; 
  });
  return *it;
}

vector<Desafio> Game::getDesafios() {
  return this->desafios;
}

string Game::getNome() {
  return this->nome;
}