#ifndef LEVEL_CONFIG_H
#define LEVEL_CONFIG_H

class LevelConfig {
public:

  LevelConfig(int level, int nextLevelExp) {
    this->level = level;
    this->nextLevelExp = nextLevelExp;
  }

  int getLevel();
  int getNextLevelExp();

private:

  int level;
  int nextLevelExp;
};

#endif // LEVEL_CONFIG_H