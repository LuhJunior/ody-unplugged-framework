#ifndef GAMEFICACAO_H
#define GAMEFICACAO_H

#include <vector>
#include "OpcoesExtras.hpp"
#include "LevelConfig.hpp"

class Gamificacao {
public:
  static Gamificacao* getInstance();
  LevelConfig getLevelConfig(int);
  bool loadOpcoes();
  bool loadLevelConfig();

private:
  Gamificacao() {}

/*   Gamificacao(vector<OpcoesExtra> opcoes, vector<LevelConfig> levelConfigs) {
    this->opcoes = opcoes;
    this->levelConfigs = levelConfigs;
  }
 */
  static Gamificacao* instance;
  vector<OpcoesExtra> opcoes;
  vector<LevelConfig> levelConfigs;
};

#endif // GAMEFICACAO_H