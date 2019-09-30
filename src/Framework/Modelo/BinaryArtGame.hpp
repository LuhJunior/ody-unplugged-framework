#include "Game.hpp"
#include "../Utils/Tools.hpp"

class BinaryArtGame: public Game {
public:
  BinaryArtGame() : Game("Binary Art") {}
  vector<string> getMatriz(Desafio);
  string generateMatrizResponse(vector<string>);
  void loadGame();
  void play(Console, Desafio, PlayerInfo&, LevelConfig);
};
