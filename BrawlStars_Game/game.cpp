#include "game.h"
#include <cstdlib>
#include <time.h>

// Implementation for Card class
Card::Card(std::string name, int level, std::string tip) {
    numeCard = name;
    levelCard = level;
    tipCard = tip;
}

std::string Card::getName() const {
    return numeCard;
}

int Card::getXP() const {
    return XP;
}

int Card::getRank() const {
    return rank;
}

void Card::printCard() const {
    std::cout << "Nume Card: " << numeCard << ", Level: " << levelCard << ", Tip Card: " << tipCard << std::endl;
}

void Card::AddGame(std::string title) {
    GamesToPlayList.push_back(title);
}

void Card::ListGames() {
    for (std::string Games : GamesToPlayList) {
        std::cout << Games << std::endl;
    }
}

void Card::Upgrade() {
    levelCard++;
}

void Card::CheckAfterGame() {
    if (rank == 1) {
        XP = XP + 10;
    } else if (rank == 2) {
        XP = XP + 8;
    } else if (rank > 2) {
        XP = XP - 3;
    }
}

void Card::PlayAlone(int& rank) {
    std::cout << "Playing Solo" << std::endl;
    this->rank = 1 + rand() % 8;
}

void Card::PlayTeam(int& rank) {
    std::cout << "Playing in a Team " << std::endl;
    this->rank = 1 + rand() % 5;
}

void Card::AddPlayer(Card brawler) {
    BrawlersList.push_back(brawler);
}

void Card::printCardList() const {
    for (Card character : BrawlersList) {
        std::cout << character.numeCard << " " << character.levelCard << " " << character.tipCard << std::endl;
    }
}

std::list<Card> Card::getCardList() {
    return BrawlersList;
}

bool Card::verif_brawler(std::string character) {
    for (auto& Brawler : BrawlersList) {
        if (Brawler.getName() == character)
            return true;
    }
    return false;
}

int Card::deletee() {
    int sum = 0;
    for (auto& Brawler : BrawlersList) {
        sum = sum + Brawler.sell(Brawler);
    }
    BrawlersList.clear();
    return sum;
}

int Card::sell(Card brawler) {
    if (brawler.tipCard == "Common") return 10;
    if (brawler.tipCard == "Rare") return 20;
    if (brawler.tipCard == "Super Rare") return 30;
    if (brawler.tipCard == "Epic") return 40;
    if (brawler.tipCard == "Mythic") return 60;
    if (brawler.tipCard == "Legendary") return 100;
}

// Implementation for Balance class
Balance::Balance(int banuti) {
    this->banuti = banuti;
}

void Balance::Istoric(int banuti) {
    istoricBalanta.push_back(banuti);
}

void Balance::printIstoric() const {
    for (int bani : istoricBalanta) {
        std::cout << bani << " ";
    }
}

void Balance::VerifBalanta(int banuti) {
    if (banuti > 0)
        std::cout << "You still have money" << '\n';
    if (banuti < 0)
        std::cout << "You are in debt" << '\n';
    if (banuti == 0)
        std::cout << "You have no money" << '\n';
}

void Balance::Spend() {
    banuti = banuti - 25;
}

int Balance::getBanuti() {
    return banuti;
}

void Balance::Spend2(int credits) {
    banuti = banuti + credits;
}
int Pacanele:: Play_Number(int credite, int choice)
{
            int num=rand()%37;
            if(choice==num)
                {
                    return credite*36;
                }
            return credite*(-1);
}
int Pacanele::Play_Colour(int credite, int col)
{
            int num=rand()%2;
            if(col==num)
            {
                return credite*2;
            }
            return credite*(-1);

}
