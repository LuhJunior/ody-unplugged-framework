#ifndef LOJA_H
#define LOJA_H

#include <vector>
#include "Items.hpp"
#include "PlayerInfo.hpp"

class Loja {
public:
  Loja() {}

  Loja(vector<Items> shopItems) {
    this->shopItems = shopItems;
  }

  string displayItems();
  bool buyItem(PlayerInfo, string);
  bool loadShopItems();
private:
  vector<Items> shopItems;
};

#endif // LOJA_H