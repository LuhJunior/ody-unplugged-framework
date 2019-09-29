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
private:
  vector<Items> shopItems;
};
