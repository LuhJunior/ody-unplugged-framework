#include "Game.hpp"
#include "../Utils/Tools.hpp"

string Game::displayChallenges() {
  string to_display = "";
  for (Desafio d: desafios) {
    to_display += d.display();
  }
  return to_display;
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

void Game::setDesafios(vector<Desafio> v) {
  this->desafios = v;
}

string Game::getNome() {
  return this->nome;
}

string Game::getDescricao() {
  return this->descricao;
}

void Game::setDescricao(string d) {
  this->descricao = d;
}

string Game::display() {
  return (
    "Nome: " + nome + '\n' +
    "Descricao: " + descricao
  );
}
