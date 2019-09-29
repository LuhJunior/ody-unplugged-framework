#include <string>
#include <vector>
#include "Items.hpp"

using namespace std;

class PlayerInfo {
public:
  string getNickname();
  int getLevel();
  int getPontosExperiencia();
  int getPontos();
  int getMoedas();
  vector<Items> getBoughtItems();
  Items getBoughtItem(string);
  void setPontosExperiencia(int);
  void setPontos(int);
  void setMoedas(int);
  void descontar(int);
  bool addBoughtItem(Items);
  void levelUp();

private:

  string nickname;
  int level;
  int pontosExperiencia;
  int pontos;
  int moedas;
  vector<Items> boughtItems;
};
