#include "BinaryArtGame.hpp"
#include <numeric>

void BinaryArtGame::loadGame() {
  string descricao = "Sera exibida uma matriz preechida com zeros e uns.\n";
  descricao += "O jogador tera que soma a linha e o resultado da soma da linha sera uma letra.\n";
  descricao += "O objetivo do game e descobrir qual palavra esta sendo formada com todas a letras\n";
  descricao += "da primeira linha ate a ultima.";
  this->setDescricao(descricao);
  vector<Desafio> desafios;
  desafios.push_back(Desafio(1, 1));
  desafios.push_back(Desafio(2, 2));
  desafios.push_back(Desafio(3, 3));
  desafios.push_back(Desafio(4, 4));
  desafios.push_back(Desafio(5, 5));
  this->setDesafios(desafios);
}

void BinaryArtGame::play(Console console, Desafio desafio, PlayerInfo& player, LevelConfig config) {
  console.display(this->getDescricao());
  console.display(desafio.display());
  console.display("\n\n");
  vector<string> matriz = getMatriz(desafio);
  for (string linha: matriz) console.display(linha + "\n");
  console.display("\n\n");
  console.display("Letras:\n\n");
  console.display("|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |\n");
  console.display("------------------------------------------------------\n");
  console.display("|  a  |  d  |  r  |  s  |  z  |  i  |  o  |  l  |  e  |\n\n");
  console.display("Digite a palavra:\n");
  string respostaCorreta = generateMatrizResponse(matriz);
  string resposta = console.entry();
  if (respostaCorreta == resposta) {
    console.display("Parabens Voce acertou\n");
    console.display("Voce ganhou:\n\n");
    
    int pontosExp = desafio.getPontuacao().getExperiencia();
    int pontosScore = desafio.getPontuacao().getPontos();
    int nextLevel = config.getNextLevelExp();
    console.display(to_string(pontosExp) + " Pontos\n");
    console.display(to_string(pontosScore) + " Pontos de experiencia\n\n");

    player.addPontos(pontosScore);
    if (player.getPontosExperiencia() + pontosExp >= nextLevel) {
      console.display("Parabens voce subiu de level!!\n");
      console.display("Seu level agora e: " + to_string(player.getLevel() + 1) + "\n");
      player.levelUp((player.getPontosExperiencia() + pontosExp) - nextLevel);
    } else {
      player.addExperiencia(pontosExp);
    }
  } else {
    console.display("Voce Errou\n");
    console.display("A resposta correta era: " + respostaCorreta);
    
  }
}

vector<string> BinaryArtGame::getMatriz(Desafio desafio) {
  int linhas = desafio.getNumero() + 3;
  vector<string> matriz = vector<string>(0, "");
  for (int i=0; i < linhas; i++) {
    int random = (rand() % 100 + 1) * 1000 + (rand() % 100 + 1);
    string linha = Tools::toBinary(random);
    linha = linha.substr(linha.size() - linhas, linha.size());
    matriz.push_back(linha);
  }
  return matriz;
}

string BinaryArtGame::generateMatrizResponse(vector<string> matriz) {
  string letras = "adrsziole";
  string resposta = "";
  for (string linha: matriz) {
    int sum = accumulate(linha.begin(), linha.end(), 0, [](int begin, int end) {
      return begin - '0' + end;
    });
    resposta += letras[sum];
  }
  return resposta;
}