#include <algorithm>
#include "Loja.hpp"

string Loja::displayItems() {
  string to_display_items = "";
  for (Items i: this->shopItems) {
    to_display_items += i.getCode() + " " + i.getNome() + " " +  to_string(i.getPreco()) + '\n'; 
  }
  return to_display_items;
}

bool Loja::loadShopItems() {
  this->shopItems.push_back(Items("Bonus Experiencia (1.5x)", "EXT01", 1000));
  this->shopItems.push_back(Items("Bonus Experiencia (2x)", "RSGY50", 1500));
}

bool Loja::buyItem(PlayerInfo p, string code) {
  auto it = find_if(this->shopItems.begin(), this->shopItems.end(), [code](Items i) {
    return i.getCode() == code;
  });

  if (it == this->shopItems.end()) {
    return false;
  } else if (it->getPreco() <= p.getMoedas()) {
    p.addBoughtItem(*it);
    p.descontar(it->getPreco());
    return true;
  }
  return false;
}