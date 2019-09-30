#include "Desafio.hpp"

int Desafio::getNivel() {
  return this->nivel;
}

int Desafio::getNumero() {
  return this->numero;
}

Pontuacao Desafio::getPontuacao() {
  return this->pontuacao;
}

string Desafio::display() {
  string to_display = "";

  to_display = "##################################################\n\n";
  to_display += "Numero do desafio: " + to_string(numero) + "  ";
  to_display += "Nivel permitido: " + to_string(nivel) + "\n";
  to_display += pontuacao.display();
  to_display += "\n##################################################\n";

  return to_display;
}
