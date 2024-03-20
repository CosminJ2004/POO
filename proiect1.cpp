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
            else if(rank<2)
            {
                XP=XP-3;
            }
        }
         void PlayAlone()
    {
        std::cout<<"Play Brawl Stars alone with the character: "<<numeCard<<" level: "<<levelCard<<" type: "<<tipCard<<std::endl;
        rank=1+rand()%5;
    }
     void PlayTeam()
    {
        std::cout<<"Play Brawl Stars alone with the character: "<<numeCard<<" level: "<<levelCard<<" type: "<<tipCard<<std::endl;
        rank=1+rand()%5;
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
class Balance: public Card
{
    private:
        int banuti;
        
        

};

int main()
{


    std::cout<<"Primesti automat 1 caracter si 100 de banuti"<<std::endl;
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
    Card card22("Cordelius",1,"Legendary");
    Card card20("Penny",7,"Rare");
    Card card21("Amber",1,"Legendary");
    Card card22("Tara",2,"Mythic");
    Card card23("Carl",12,"Rare");
    Card card24("Darryl",3,"Rare");
    Card card25("Gus",4,"SuperRare");
    Card card26("Jessie",1,"SuperRare");

    while (true)
    {
    int unbox=0;
    int caz=0;
    std::cout<<"Select your actions:"<<std::endl;
    std::cout<<"1)Unbox"<<std::endl;
    std::cout<<"2)Play"<<std::endl;
    std::cout<<"3)Pacaneste"<<std::endl; 
    std::cin>>unbox;
    srand(time(NULL));
    if(unbox==1)
    {

        caz=(rand())%26;
        if(caz==0)
           { if(card2.verif_brawler(card2.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card2.printCard();}
                else
                card2.AddPlayer(card2);    
           } 
        
        if(caz==1)
           { if(card2.verif_brawler(card3.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card3.printCard();}
                else
                card2.AddPlayer(card3);    
           } 
        
        if(caz==2)
           { if(card2.verif_brawler(card4.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card4.printCard();}
                else
                card2.AddPlayer(card4);    
           } 
        
        if(caz==3)
           { if(card2.verif_brawler(card5.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card5.printCard();}
                else
                card2.AddPlayer(card5);    
           } 
        
        if(caz==4)
           { if(card2.verif_brawler(card6.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card6.printCard();}
                else
                card2.AddPlayer(card6);    
           } 
        
        if(caz==5)
           { if(card2.verif_brawler(card7.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card7.printCard();}
                else
                card2.AddPlayer(card7);    
           } 
        
        if(caz==6)
           { if(card2.verif_brawler(card8.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card8.printCard();}
                else
                card2.AddPlayer(card8);    
           } 
        
        if(caz==7)
           { if(card2.verif_brawler(card9.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card9.printCard();}
                else
                card2.AddPlayer(card9);    
           } 
        
        if(caz==8)
           { if(card2.verif_brawler(card10.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card10.printCard();}
                else
                card2.AddPlayer(card10);    
           } 
        
        if(caz==9)
           { if(card2.verif_brawler(card11.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card11.printCard();}
                else
                card2.AddPlayer(card11);    
           } 
        
        if(caz==10)
           { if(card2.verif_brawler(card12.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card12.printCard();}
                else
                card2.AddPlayer(card12);    
           } 
        
        if(caz==11)
           { if(card2.verif_brawler(card13.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card13.printCard();}
                else
                card2.AddPlayer(card13);    
           } 
        
        if(caz==12)
           { if(card2.verif_brawler(card13.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card13.printCard();}
                else
                card2.AddPlayer(card13);    
           } 
        
        if(caz==13)
           { if(card2.verif_brawler(card14.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card14.printCard();}
                else
                card2.AddPlayer(card14);    
           } 
        
        if(caz==14)
           { if(card2.verif_brawler(card15.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card15.printCard();}
                else
                card2.AddPlayer(card15);    
           } 
        
        if(caz==15)
           { if(card2.verif_brawler(card16.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card16.printCard();}
                else
                card2.AddPlayer(card16);    
           } 
        
        if(caz==16)
           { if(card2.verif_brawler(card17.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card17.printCard();}
                else
                card2.AddPlayer(card17);    
           } 
        
        if(caz==17)
           { if(card2.verif_brawler(card18.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card18.printCard();}
                else
                card2.AddPlayer(card18);    
           } 
        
        if(caz==18)
           { if(card2.verif_brawler(card19.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card19.printCard();}
                else
                card2.AddPlayer(card19);    
           } 
        
        if(caz==19)
           { if(card2.verif_brawler(card20.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card20.printCard();}
                else
                card2.AddPlayer(card20);    
           } 
        
        if(caz==20)
           { if(card2.verif_brawler(card21.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card21.printCard();}
                else
                card2.AddPlayer(card21);    
           }  
        
        if(caz==21)
           { if(card2.verif_brawler(card22.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card22.printCard();}
                else
                card2.AddPlayer(card22);    
           } 
        
        if(caz==22)
           { if(card2.verif_brawler(card23.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card23.printCard();}
                else
                card2.AddPlayer(card23);    
           } 
        
        if(caz==23)
           { if(card2.verif_brawler(card24.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card24.printCard();}
                else
                card2.AddPlayer(card24);    
           } 
        
        if(caz==24)
           { if(card2.verif_brawler(card25.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card25.printCard();}
                else
                card2.AddPlayer(card25);    
           } 
        
        if(caz==25)
           { if(card2.verif_brawler(card26.getName()))
                {std::cout<<"Ai primit o dublura"<<'\n';
                card26.printCard();}
                else
                card2.AddPlayer(card26);    
           } 
        
        std::cout<<"Your brawlers list: "<<'\n';
        card2.printCardList();
    }

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
        
        std::cout<<"Istoricul jocurilor dumneavoastra:";
        card2.ListGames();
        std::cout<<"alege cum vrei sa joci: 1)singur  2) cu un prieten"<<std::endl;
        std::cin>>caz_duo;
        std::cout<<"Caracterele tale sunt: ";
        card2.printCardList();
        std::cout<<"/////introdu caracterul:"<<std::endl;
        
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
            
            card2.PlayAlone();

        }
        else
        {card2.PlayTeam();}
        card2.CheckAfterGame();
        std::cout<<"Rankul tau"<<card2.getRank()<<" Xp-ul tau:"<<card2.getXP()<<'\n';

        }

        else 
        {
            std::cout<<"Nu detineti caracterul selectat:(("<<'\n';
            std::cout<<"Caracterele tale sunt: ";
            card2.printCardList();
            

        }
        
    }
    if(unbox==3)
    {
        std::cout<<"da la ruleta"<<std::endl;
        
    }
    }

    
}