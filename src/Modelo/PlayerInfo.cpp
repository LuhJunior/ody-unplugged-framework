#include "PlayerInfo.hpp"
#include "../Utils/Tools.hpp"

string PlayerInfo::getNickname() {
  return this->nickname;
}

int PlayerInfo::getLevel() {
  return this->level;
}

int PlayerInfo::getPontosExperiencia() {
  return this->pontosExperiencia;
}

int PlayerInfo::getPontos() {
  return this->pontos;
}

int PlayerInfo::getMoedas() {
  return this->moedas;
}

vector<Items> PlayerInfo::getBoughtItems() {
  return this->boughtItems;
}

Items PlayerInfo::getBoughtItem(string code) {
  auto it = find_val_if(this->boughtItems, [code](Items i) {
    return i.getCode() == code;
  });
  return *it;
}

void PlayerInfo::setPontosExperiencia(int pontos) {
  this->pontosExperiencia = pontos;
}

void PlayerInfo::setPontos(int pontos) {
  this->pontos = pontos;
}

void PlayerInfo::setMoedas(int moedas) {
  this->moedas = moedas;
}

bool PlayerInfo::addBoughtItem(Items i) {
  this->boughtItems.push_back(i);
  return true;
}

void PlayerInfo::descontar(int valor) {
  this->moedas -= valor; 
}

void PlayerInfo::levelUp() {
  this->level ++; 
}