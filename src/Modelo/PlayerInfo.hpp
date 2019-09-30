#ifndef PLAYER_INFO_H
#define PLAYER_INFO_H

#include <string>
#include <vector>
#include "Items.hpp"

using namespace std;

class PlayerInfo {
public:

  PlayerInfo() {}

  PlayerInfo(string nickname) {
    this->nickname = nickname;
    this->level = 1;
    this->pontos = 0;
    this->moedas = 0;
    this->pontosExperiencia = 0;
  }

  PlayerInfo& operator= (const PlayerInfo p) {
    this->nickname = p.nickname;
    this->level = p.level;
    this->pontosExperiencia = p.pontosExperiencia;
    this->pontos = p.pontos;
    this->moedas = p.moedas;
    return *this;
  }

  string getNickname();
  int getLevel();
  int getPontosExperiencia();
  int getPontos();
  int getMoedas();
  vector<Items> getBoughtItems();
  Items getBoughtItem(string);
  void setPontosExperiencia(int);
  void addExperiencia(int);
  void setPontos(int);
  void addPontos(int);
  void setMoedas(int);
  void descontar(int);
  void levelUp(int);
  bool addBoughtItem(Items);
  bool loadPlayer();
  string display();

private:

  string nickname;
  int level;
  int pontosExperiencia;
  int pontos;
  int moedas;
  vector<Items> boughtItems;
};

#endif // PLAYER_INFO_H
