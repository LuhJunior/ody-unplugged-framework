#include <string>
#include "Pontuacao.hpp"

using namespace std;

class Desafio {
public:
  Desafio(int nivel, int numero) {}

  Desafio(int nivel, int numero) {
    this->nivel = nivel;
    this->numero = numero;
  }

  string displayChallenge();
  string displayResults();
  string getUserResponse();
  Pontuacao computateResponse();
  int getNivel();
  int getNumero();
private:

  int nivel, numero;
};
