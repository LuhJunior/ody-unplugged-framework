#ifndef PONTUACAO_H
#define PONTUACAO_H

#include <string>

using namespace std;

class Pontuacao {
public:
  Pontuacao() {
    this->pontos = 0;
    this->experiencia = 0;
  }

  Pontuacao(int pontos, int experiencia) {
    this->pontos = pontos;
    this->experiencia = experiencia;
  }

  int getPontos();
  int getExperiencia();
  string display();
private:

  int pontos, experiencia;
};

#endif // PONTUACAO_H