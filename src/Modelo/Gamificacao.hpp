#include <vector>
#include "OpcoesExtras.hpp"
#include "LevelConfig.hpp"

class Gamificacao {
public:
  Gamificacao() {}
  Gamificacao(vector<OpcoesExtra> opcoes, vector<LevelConfig> levelConfigs) {
    this->opcoes = opcoes;
    this->levelConfigs = levelConfigs;
  }
private:
  vector<OpcoesExtra> opcoes;
  vector<LevelConfig> levelConfigs;
};