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

        
        

};

int main()
{


    std::cout<<"Primesti automat 1 caracter si 100 de banuti"<<'\n'<<"Rankul tau e 0"<<std::endl;
    Card card2("Shelly",5,"Common");
    card2.AddPlayer(card2);
    card2.printCard();
    Card card3("El Primo",2,"Rare");
    Card card4("Bull",5,"Rare");
    Card card5("Surge",1,"Legendary");
    Card card6("Emz",5,"Epic");
    Card card7("Dynamike",3,"SuperRare");
    Card card8("Brock",6,"Rare");
    Card card9("8-Bit",3,"SuperRare");
    Card card10("Bea",2,"Epic");
    Card card11("Eve",3,"Mythic");
    Card card12("Byron",5,"Mythic");
    Card card13("Nani",2,"Epic");
    Card card14("Kit",1,"Legendary");
    Card card15("Sandy",5,"Legendary");
    Card card16("Meg",5,"Legendary");
    Card card17("Doug",1,"Mythic");
    Card card18("Pearl",2,"Epic");
    Card card19("Spike",5,"Legendary");
    Card card1("Cordelius",1,"Legendary");
    Card card20("Penny",7,"Rare");
    Card card21("Amber",1,"Legendary");
    Card card22("Tara",2,"Mythic");
    Card card23("Carl",12,"Rare");
    Card card24("Darryl",3,"Rare");
    Card card25("Gus",4,"SuperRare");
    Card card26("Jessie",1,"SuperRare");
    Card card27("Nita Special", 1, "Common");
    Card card28("Nita", 1, "Common");
    Card card29("Colt", 1, "Common");
    Card card30("Barley", 1, "Rare");
    Card card31("Poco", 1, "Rare");
    Card card32("Rosa", 1, "Rare");
    Card card33("Rico", 1, "Super Rare");
    Card card34("Jacky", 1, "Super Rare");
    Card card35("Piper", 1, "Epic");
    Card card36("Pam", 1, "Epic");
    Card card37("Frank", 1, "Epic");
    Card card38("Bibi", 1, "Epic");
    Card card39("Edgar", 1, "Epic");
    Card card40("Max", 1, "Mythic");
    Card card41("Mr. P", 1, "Mythic");
    Card card42("Sprout", 1, "Mythic");
    Card card43("Gene", 1, "Mythic");
    Card card44("Crow", 1, "Legendary");
    Card card45("Leon", 1, "Legendary");
    Card card46("Colette", 1, "Legendary");
    Card card47("Lou", 1, "Legendary");
    Card card48("Colonel Ruffs", 1, "Legendary");
    Card card49("Belle", 1, "Chromatic");
    Card card50("Squeak", 1, "Chromatic");
    Card card51("Buzz", 1, "Chromatic");
    Card card52("Griff", 1, "Chromatic");



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
    caz = (rand()) % 52;
Card cards[] = {card1,card2, card3, card4, card5, card6, card7, card8, card9, card10, 
                card11, card12, card13, card14, card15, card16, card17, card18,
                card19, card20, card21, card22, card23, card24, card25, card26,
                card27, card28, card29, card30, card31, card32, card33, card34,
                card35, card36, card37, card38, card39, card40, card41, card42,
                card43, card44, card45, card46, card47, card48, card49, card50,
                card51, card52};


    if (caz >= 0 && caz <= 51) {
        if (card2.verif_brawler(cards[caz].getName())) {
            std::cout << "You got a Brawler you already have" << '\n';
            cards[caz].printCard();
        } else {
            card2.AddPlayer(cards[caz]);
        }
    }

    std::cout << "Your brawlers list: " << '\n';
    card2.printCardList();

    bani.Istoric(bani.getBanuti());
    std::cout << "Your balance: " << bani.getBanuti() << std::endl;
    std::cout << "Your money history: " << std::endl;
    bani.printIstoric();
   }
    bani.VerifBalanta(bani.getBanuti()); if(unbox==3)
    {
        std::cout<<"da la ruleta"<<std::endl;
        
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