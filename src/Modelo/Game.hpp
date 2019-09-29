#include <string>
#include <vector>
#include "Desafio.hpp"

using namespace std;

class Game {

public:

  Game() {};

  Game(string nome, vector<Desafio> desafios) {
    this->nome = nome;
    this->desafios = desafios;
  }

  string displayChallenges();
  string getNome();
  Desafio getChoosenChallenge(int);
  vector<Desafio> getDesafios();
private:

  string nome;
  vector<Desafio> desafios;
};
