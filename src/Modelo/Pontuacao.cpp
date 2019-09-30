#include "Pontuacao.hpp"

int Pontuacao::getPontos() {
  return this->pontos;
}

int Pontuacao::getExperiencia() {
  return this->experiencia;
}

string Pontuacao::display() {
  string to_display = "";
  to_display = "Pontos: " + to_string(pontos) + "\n";
  to_display += "Experiencia: " + to_string(experiencia) + "\n";
  return to_display;
}
