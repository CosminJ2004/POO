#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <list>

class Card {
private:
    std::list<std::string> GamesToPlayList;
protected:
    std::string numeCard;
    int levelCard;
    std::string tipCard;
    int rank = 0;
    int XP = 0;
    std::list<Card> BrawlersList;

public:
    Card(std::string name, int level, std::string tip);
    std::string getName() const;
    int getXP() const;
    int getRank() const;
    void printCard() const;
    void AddGame(std::string title);
    void ListGames();
    void Upgrade();
    void CheckAfterGame();
    void PlayAlone(int& rank);
    void PlayTeam(int& rank);
    void AddPlayer(Card brawler);
    void printCardList() const;
    std::list<Card> getCardList();
    bool verif_brawler(std::string character);
    int deletee();
    int sell(Card brawler);
};

class Balance {
private:
    int banuti;
    std::list<int> istoricBalanta;

public:
    Balance(int banuti);
    void Istoric(int banuti);
    void printIstoric() const;
    void VerifBalanta(int banuti);
    void Spend();
    int getBanuti();
    void Spend2(int credits);
};

class Pacanele{
    private:
        int Numar;
        int Culoare;
    public:
        int Play_Number(int credite, int choice);
        int Play_Colour(int credite, int col);



};
#endif // GAME_H
