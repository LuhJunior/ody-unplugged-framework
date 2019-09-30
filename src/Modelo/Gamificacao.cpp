#include "Gamificacao.hpp"
#include "../Utils/Tools.hpp"

Gamificacao* Gamificacao::instance = nullptr;

LevelConfig Gamificacao::getLevelConfig(int level) {
  auto it = find_val_if(levelConfigs, [level](LevelConfig l) {
    return l.getLevel() == level;
  });
  return *it;
}

bool Gamificacao::loadOpcoes() {
  this->opcoes.push_back(OpcoesExtra("Easter Egg", 10));
}

bool Gamificacao::loadLevelConfig() {
  this->levelConfigs.push_back(LevelConfig(1, 100));
  this->levelConfigs.push_back(LevelConfig(2, 500));
  this->levelConfigs.push_back(LevelConfig(3, 1000));
  this->levelConfigs.push_back(LevelConfig(4, 2500));
  this->levelConfigs.push_back(LevelConfig(5, 3800));
  this->levelConfigs.push_back(LevelConfig(6, 5000));
  this->levelConfigs.push_back(LevelConfig(7, 6800));
  this->levelConfigs.push_back(LevelConfig(8, 8500));
  this->levelConfigs.push_back(LevelConfig(9, 9900));
  this->levelConfigs.push_back(LevelConfig(10, 20000));
}

Gamificacao* Gamificacao::getInstance() {
  if (instance == nullptr) {
    instance = new Gamificacao();
  }
  return instance;
}