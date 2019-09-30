#ifndef RANKING_H
#define RANKING_H

#include <string>
#include <vector>

using namespace std;

class Ranking {
public:
  Ranking(vector<string>  nicknames) {
    this->nicknames = nicknames;
  }
  vector<string>  nicknames;
  void displayRanking();
};

class GeneralRanking {

};

class GameRanking: public Ranking {
public:
  GameRanking(vector<string>  nicknames, string gameName) : Ranking(nicknames) {
    this->gameName = gameName;
  }

  string gameName;
};

class ChallengeRanking: public Ranking {
public:
  ChallengeRanking(vector<string>  nicknames, string challengeName) : Ranking(nicknames) {
    this->challengeName = challengeName;
  }

  string challengeName;
};

#endif // RANKING_H
