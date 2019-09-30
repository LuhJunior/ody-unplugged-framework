#ifndef ITEMS_H
#define ITEMS_H

#include <string>
using namespace std;

class Items {
public:
  Items() {
    this->nome = "";
    this->preco = 0;
    this->code = "";
  }

  Items(string nome, string code, int preco) {
    this->nome = nome;
    this->preco = preco;
    this->code = code;
  }

  string getNome();
  string getCode();
  int getPreco();
private:

  string code;
  string nome;
  int preco;
};

#endif // ITEMS_H
