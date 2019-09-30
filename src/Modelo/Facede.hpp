#ifndef FACEDE_H
#define FACEDE_H
#include <vector>
#include "../Interface/Console.hpp"
#include "PlayerInfo.hpp"
#include "Game.hpp"

#include "Ranking.hpp"
#include "Loja.hpp"
#include "Gamificacao.hpp"

#include <memory>

class Facede {
public:
  Facede() {}

  Facede(string nickname) {
    this->playerInfo = PlayerInfo(nickname);
    this->loja = Loja();
    this->gamificacao = Gamificacao::getInstance();
  }

  Facede(Loja loja, Gamificacao* gamificacao, PlayerInfo playerInfo, vector<Game*> games, vector<Ranking> ranks) {
    this->loja = loja;
    this->gamificacao = Gamificacao::getInstance();
    this->playerInfo = playerInfo;
    this->games = games;
    this->ranks = ranks;
  }

  string displayGame(string);
  string displayGames();
  string displayLojaItems();
  string displayChallenges(string);
  string displayItems();
  string displayRanking();
  string displayPlayer();
  Game* getGame(string);
  int getChoosenChallenge();
  bool buyItem(PlayerInfo);
  bool loadPlayer();
  bool loadGames();
  bool loadAll();
  void levelUp();

public:
  Loja loja;
  Gamificacao* gamificacao;
  PlayerInfo playerInfo;
  vector<Game *> games;
  vector<Ranking> ranks;
};

#endif // FACEDE_H