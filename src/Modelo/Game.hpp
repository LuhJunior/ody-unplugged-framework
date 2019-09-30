#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Desafio.hpp"
#include "PlayerInfo.hpp"
#include "LevelConfig.hpp"
#include "../Interface/Console.hpp"

using namespace std;

class Game {

public:

  Game() {};

  Game(string nome) {
    this->nome = nome;
    this->desafios = desafios;
  }

  Game(string nome, vector<Desafio> desafios) {
    this->nome = nome;
    this->desafios = desafios;
  }

  string display();
  string displayChallenges();
  string getNome();
  string getDescricao();
  void setDescricao(string);
  Desafio getChoosenChallenge(int);
  vector<Desafio> getDesafios();
  void setDesafios(vector<Desafio>);
  virtual void loadGame() = 0;
  virtual void play(Console, Desafio, PlayerInfo&, LevelConfig) = 0;

private:

  string nome;
  string descricao;
  vector<Desafio> desafios;
};

#endif // GAME_H