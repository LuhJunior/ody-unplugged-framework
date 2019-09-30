#ifndef OPCOES_EXTRAS_H
#define OPCOES_EXTRAS_H

#include <string>

using namespace std;

class OpcoesExtra {
public:
  OpcoesExtra(string descricao, int nivel) {
    this->descricao = descricao;
    this->nivel = nivel;
  }
  string descricao;
  int nivel;
};

#endif // OPCOES_EXTRAS_H
