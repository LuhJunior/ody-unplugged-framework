#include <vector>
#include "../Interface/Console.hpp"
#include "PlayerInfo.hpp"
#include "Game.hpp"
#include "Ranking.hpp"
#include "Loja.hpp"
#include "Gamificacao.hpp"

class Facede {
public:
  Facede() {}

  Facede(Loja loja, Gamificacao gamificacao, PlayerInfo playerInfo, vector<Game> games, vector<Ranking> ranks) {
    this->loja = loja;
    this->gamificacao = gamificacao;
    this->playerInfo = playerInfo;
    this->games = games;
    this->ranks = ranks;
  }

  string displayGame(string);
  string displayChallenges();
  string displayItems();
  string displayRanking();
  int getChoosenChallenge();
  bool buyItem(PlayerInfo);
  void levelUp();
public:
  Loja loja;
  Gamificacao gamificacao;
  PlayerInfo playerInfo;
  vector<Game> games;
  vector<Ranking> ranks;
};