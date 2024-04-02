#include <iostream>
#include "game.h"
#include <random>
#include <cstdlib>

// Codul principal al programului

int main() {
    std::cout<<"Primesti automat 1 caracter si 100 de banuti"<<'\n'<<"Rankul tau e 0"<<std::endl;
    Card card0("Shelly",5,"Common");
    Card card2("Nita", 1, "Common");
    card2.AddPlayer(card2);
    card2.printCard();
Card card1("Nita Special", 1, "Common");

Card card3("Colt", 1, "Common");
Card card4("Poco", 1, "Rare");
Card card5("Rosa", 1, "Rare");
Card card6("Barley", 1, "Rare");
Card card7("Carl", 1, "Rare");
Card card8("Darryl", 1, "Rare");
Card card9("Penny", 1, "Rare");
Card card10("Brock", 1, "Rare");
Card card11("Bull", 1, "Rare");
Card card12("Gus", 1, "Super Rare");
Card card13("Jessie", 1, "Super Rare");
Card card14("Rico", 1, "Super Rare");
Card card15("Jacky", 1, "Super Rare");
Card card16("8-Bit", 1, "Super Rare");
Card card17("Dynamike", 1, "Super Rare");
Card card18("Amber", 1, "Epic");
Card card19("Kit", 1, "Epic");
Card card20("Doug", 2, "Mythic");
Card card21("Meg", 2, "Epic");
Card card22("Sandy", 2, "Epic");
Card card23("Cordelius", 2, "Epic");
Card card24("Nani", 2, "Epic");
Card card25("Pearl", 2, "Epic");
Card card26("Bea", 2, "Epic");
Card card27("Emz", 2, "Epic");
Card card28("Piper", 2, "Epic");
Card card29("Pam", 2, "Epic");
Card card30("Frank", 3, "Epic");
Card card31("Bibi", 3, "Epic");
Card card32("Edgar", 2, "Epic");
Card card33("Eve", 3, "Mythic");
Card card34("Byron", 3, "Mythic");
Card card35("Spike", 3, "Legendary");
Card card36("Tara", 3, "Legendary");
Card card37("Belle", 3, "Legendary");
Card card38("Squeak", 3, "Legendary");
Card card39("Buzz", 3, "Legendary");
Card card40("Griff", 4, "Legendary");
Card card41("Max", 1, "Legendary");
Card card42("Mr. P", 2, "Legendary");
Card card43("Sprout", 3, "Legendary");
Card card44("Gene", 4, "Legendary");
Card card45("Crow", 5, "Legendary");
Card card46("Leon", 4, "Legendary");
Card card47("Colette", 4, "Legendary");
Card card48("Colonel Ruffs", 4, "Legendary");
Card card49("Lou", 4, "Legendary");



    Balance bani(100);
    int rank=0;
    int XP=0;
    while (true)
    {

    std::cout<<"**********************************************************************"<<std::endl;
    int unbox=0;
    int caz=0;
    std::cout<<"Select your actions:"<<std::endl;
    std::cout<<"1)Unbox"<<std::endl;
    std::cout<<"2)Play"<<std::endl;
    std::cout<<"3)Roullette"<<std::endl; 
    std::cout<<"4)Sell ALL Brawlers"<<std::endl; 
    std::cout<<"5)Quit"<<std::endl; 
        std::cout<<"**********************************************************************"<<std::endl;

    
    
    std::cin>>unbox;
    srand(time(NULL));
    
    

    if(unbox==2){
        int caz_duo;
        std::string joc1;
        int caz_joc;
        std::cout<<"Ce vrei sa te joci"<<'\n';
        std::cout<<"1)Gem Grab"<<'\n';
        std::cout<<"2)Showdown"<<'\n';
        std::cout<<"3)Heist"<<'\n';
        std::cout<<"4)Knockout"<<'\n';
        std::cout<<"5)Football"<<'\n';
        std::cin>>caz_joc;
        if(caz_joc==1)
            card2.AddGame("Gem Grab");
        else if(caz_joc==2)
            card2.AddGame("Showdown");
         else if(caz_joc==3)
            card2.AddGame("Heist");
        else if(caz_joc==4)
            card2.AddGame("Knockout");
        else if(caz_joc==5)
            card2.AddGame("Football");
        
        std::cout<<"Your games history:";
        card2.ListGames();
        std::cout<<"choose how you want to play: 1)solo  2) in a team"<<std::endl;
        std::cin>>caz_duo;
        std::cout<<"Your characters: ";
        card2.printCardList();
        std::cout<<"-----------type your character------------:"<<std::endl;
        
        std::string caracter;
        std::cin>>caracter;
        bool ok;

        if(card2.verif_brawler(caracter))
        {
            ok=1;
        }
        else ok=0;

        if (ok==1){
        // std::cout<<"alege ce joc vrei sa joci:"<<'\n';
        // card2.ListGames();
        if(caz_duo==1){
            
            card2.PlayAlone(rank);

        }
        else
        {card2.PlayTeam(rank);}
        card2.CheckAfterGame();
        rank=card2.getRank();
        XP=card2.getXP();
        std::cout<<"Your Rank: "<<rank<<" Your XP: "<<XP<<'\n';
        


        }

        else 
        {
            std::cout<<"You dont own the selected character: "<<caracter<<'\n';
            std::cout<<"Your characters are: ";
            card2.printCardList();
            

        }
        
    }
   if (unbox == 1) {
    bani.Spend();
    caz = (rand()) % 900;
Card cards[] = {card0,card1,card2, card3, card4, card5, card6, card7, card8, card9, card10, 
                card11, card12, card13, card14, card15, card16, card17, card18,
                card19, card20, card21, card22, card23, card24, card25, card26,
                card27, card28, card29, card30, card31, card32, card33, card34,
                card35, card36, card37, card38, card39, card40, card41, card42,
                card43, card44, card45, card46, card47, card48, card49};


    if (caz >= 0 && caz <=300) {
        if (card2.verif_brawler(cards[caz%4].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz%4].printCard();
        } else {
            card2.AddPlayer(cards[caz%4]);
        }
    }
    if (caz >= 301 && caz <=500) {
        if (card2.verif_brawler(cards[caz%8+4].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz%8+4].printCard();
        } else {
            card2.AddPlayer(cards[caz%8+4]);
        } 
    }
     if (caz >= 501 && caz <=700) {
        if (card2.verif_brawler(cards[caz%5+12].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz%5+12].printCard();
        } else {
            card2.AddPlayer(cards[caz%5+12]);
        }
     }
     if (caz >= 701 && caz <=800) {
        if (card2.verif_brawler(cards[caz%18+18].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz%18+18].printCard();
        } else {
            card2.AddPlayer(cards[caz%18+18]);
        }
     }
     if (caz >= 801 && caz <=899) {
        if (card2.verif_brawler(cards[caz%16+35].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz%16+35].printCard();
        } else {
            card2.AddPlayer(cards[caz%16+35]);
        }
     }

    std::cout << "Your brawlers list: " << '\n';
    card2.printCardList();

    bani.Istoric(bani.getBanuti());
    std::cout << "Your balance: " << bani.getBanuti() << std::endl;
    std::cout << "Your money history: " << std::endl;
    bani.printIstoric();
   
    bani.VerifBalanta(bani.getBanuti()); 
   }
     
    
    if(unbox==3)
    {
        int ok1=1;
        while(ok1)
        {
        std::cout<<"Your balance:"<<bani.getBanuti()<<std::endl;
        std::cout<<"Roulette"<<std::endl;
        std::cout<<"Choose what do you want to bet on: 1)Colour  2)Number"<<std::endl;
        int choice;
        std::cin>>choice;
        Pacanele ruleta;
        if(choice==1)
        {
                    std::cout<<"Choose what do you want to bet on: 1)Black  2)Red"<<std::endl;
                    int choice2;
                    std::cin>>choice2;
                    std::cout<<"Choose the amount you are betting: "<<std::endl;
                    int credits;
                    std::cin>>credits;
                    if(credits>bani.getBanuti())
                    {
                        std::cout<<"insuficient funds!"<<std::endl;

                    }
                    else {bani.Spend2(ruleta.Play_Colour(credits,choice));  bani.VerifBalanta(bani.getBanuti());std::cout<<bani.getBanuti()<<'\n'; ok1=0;}
        }
        else{
            std::cout<<"Choose the number youre betting on (0-36)"<<std::endl;
                    int choice2;
                    std::cin>>choice2;

            std::cout<<"Choose the amount you are betting: "<<std::endl;
                    int credits;
                    std::cin>>credits;
                     if(credits>bani.getBanuti())
                    {
                        std::cout<<"insuficient funds!"<<std::endl;

                    }
                  else {bani.Spend2(  ruleta.Play_Number(credits,choice2)); bani.VerifBalanta(bani.getBanuti()); std::cout<<bani.getBanuti()<<'\n'; ok1=0;}
        }
        }

    }
    if(unbox==4)
    {
        bani.Spend2(card2.deletee());
        std::cout<<"Your current ballance is:"<<bani.getBanuti()<<std::endl;

    }
    if(unbox==5)
    {
        std::cout<<"Thanks for playing!";
        break;
    }
    else if(unbox!=1&&unbox!=2&&unbox!=3&&unbox!=4&&unbox!=5)
    {
        std::cout<<"Action denied!"<<std::endl;
        
    }
    }
    return 0;
}
