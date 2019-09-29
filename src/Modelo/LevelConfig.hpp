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
