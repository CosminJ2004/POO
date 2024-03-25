#include <iostream>
#include <list>
#include <time.h>
#include <random>
#include <cstdlib>

class Card{
    private:

        std::list<std::string> GamesToPlayList;
    protected:
        std:: string numeCard;
        int levelCard;
        std::string tipCard;
         int rank=0;
        int XP=0;
         std::list<Card> BrawlersList;

    public:
        Card(std::string name, int level, std::string tip)
        {
                numeCard=name;
                levelCard=level;
                tipCard=tip;
        }
        std::string getName() const{
            return numeCard;
        }
        int getXP() const{
            return XP;
        }
        int getRank() const{
            return rank;
        }

        
        //getter pentru info
        void printCard() const
        {
           std:: cout<<"Nume Card: "<<numeCard<<", Level: "<<levelCard<<", Tip Card: "<<tipCard<<std::endl;
           
        }
        void AddGame(std::string title)
        {
            GamesToPlayList.push_back(title);
        }
        void ListGames()
        { for(std::string Games:GamesToPlayList)
            {
                std::cout<<Games<<std::endl;
            }}
        void Upgrade()
        {
            levelCard++;
            
        }
        void CheckAfterGame()
        {
            if(rank==1)
            {
                XP=XP+10;
            }
            else if(rank==2)
            {
                XP=XP+8;

            }
            else if(rank>2)
            {
                XP=XP-3;
            }
        }
        
         void PlayAlone(int &rank)
    {
        std::cout<<"Playing Solo"<<std::endl;
        this->rank=1+rand()%8;

        
    }
     void PlayTeam( int &rank)
    {
        std::cout<<"Playing in a Team "<<std::endl;
        this->rank=1+rand()%5;
    }
    

    
    void AddPlayer(Card brawler)
    {
     BrawlersList.push_back(brawler);
    }

    void printCardList() const
        {
           
            for(Card character:BrawlersList)
            {
                std::cout<<character.numeCard<<" "<<character.levelCard<<" "<<character.tipCard<<std::endl;
            }
        }
   std::list<Card> getCardList()
    {
        return BrawlersList;
    }
   bool verif_brawler(std::string character)
    {for(auto &Brawler : BrawlersList)
        {
          if(Brawler.getName()==character)
          return true;
          
        } return false; 
    }
    
        
    
  
};
class Balance
{
    private:
        int banuti;
         std::list<int> istoricBalanta;
    
    public:

    Balance(int banuti) 
    {
                this->banuti=banuti;
    }

    void Istoric(int banuti)
    {
     istoricBalanta.push_back(banuti);
    }

    void printIstoric() const
        {
           
            for(int bani:istoricBalanta)
            {
                std::cout<<bani<<" ";
            }
        }
    void VerifBalanta(int banuti)
    {
        if(banuti>0)
        std::cout<<"You still have money"<<'\n';
        if(banuti<0)
        std::cout<<"You are in debt"<<'\n';
        if(banuti==0)
        std::cout<<"You have no money"<<'\n';
    }
     void Spend() 
    {
        banuti=banuti-2;

    }
    int getBanuti()
    { 
        return banuti;
    }
    void Spend2(int credits)
    {
        banuti=banuti+credits;
    }
     
        

};

class Pacanele
{
    private:
        int Numar;
        int Culoare;
    public:
        int Play_Number(int credite, int choice)
        {
            int num=rand()%37;
            if(choice==num)
                {
                    return credite*36;
                }
            return credite*(-1);
        }
        int Play_Colour(int credite, int col)
        {
            int num=rand()%2;
            if(col==num)
            {
                return credite*2;
            }
            return credite*(-1);

        }
};

int main()
{


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
Card card12("Gus", 12, "Super Rare");
Card card13("Jessie", 13, "Super Rare");
Card card14("Rico", 14, "Super Rare");
Card card15("Jacky", 15, "Super Rare");
Card card16("8-Bit", 16, "Super Rare");
Card card17("Dynamike", 17, "Super Rare");
Card card18("Amber", 18, "Epic");
Card card19("Kit", 19, "Epic");
Card card20("Doug", 20, "Mythic");
Card card21("Meg", 21, "Epic");
Card card22("Sandy", 22, "Epic");
Card card23("Cordelius", 23, "Epic");
Card card24("Nani", 24, "Epic");
Card card25("Pearl", 25, "Epic");
Card card26("Bea", 26, "Epic");
Card card27("Emz", 27, "Epic");
Card card28("Piper", 28, "Epic");
Card card29("Pam", 29, "Epic");
Card card30("Frank", 30, "Epic");
Card card31("Bibi", 31, "Epic");
Card card32("Edgar", 32, "Epic");
Card card33("Eve", 33, "Mythic");
Card card34("Byron", 34, "Mythic");
Card card35("Spike", 35, "Legendary");
Card card36("Tara", 36, "Legendary");
Card card37("Belle", 37, "Legendary");
Card card38("Squeak", 38, "Legendary");
Card card39("Buzz", 39, "Legendary");
Card card40("Griff", 40, "Legendary");
Card card41("Max", 41, "Legendary");
Card card42("Mr. P", 42, "Legendary");
Card card43("Sprout", 43, "Legendary");
Card card44("Gene", 44, "Legendary");
Card card45("Crow", 45, "Legendary");
Card card46("Leon", 46, "Legendary");
Card card47("Colette", 47, "Legendary");
Card card48("Colonel Ruffs", 48, "Legendary");
Card card49("Lou", 49, "Legendary");



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
    std::cout<<"3)Pacaneste"<<std::endl; 
    std::cout<<"4)Quit"<<std::endl; 
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
        std::cout<<"Thanks for playing!";
        break;
    }
    else if(unbox!=1&&unbox!=2&&unbox!=3&&unbox!=4)
    {
        std::cout<<"Action denied!"<<std::endl;
        
    }
    }
     }

    
