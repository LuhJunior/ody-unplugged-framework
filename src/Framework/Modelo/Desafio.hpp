#ifndef DESAFIO_H
#define DESAFIO_H

#include <string>
#include "Pontuacao.hpp"

using namespace std;

class Desafio {
public:
  Desafio() {}

  Desafio(int nivel, int numero) {
    this->nivel = nivel;
    this->numero = numero;
    this->pontuacao = Pontuacao(numero * 100, nivel * 100);
  }

  string display();
  int getNivel();
  int getNumero();
  Pontuacao getPontuacao();

private:

  int nivel, numero;
  Pontuacao pontuacao;
};

#endif // DESAFIO_H
