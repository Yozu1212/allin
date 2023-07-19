#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <time.h>
#define cards 52
#define faces 13

struct card{
       const char*face;
       const char*suit;
       };
       typesef struct card Card;
       
       void fillDeck(Card*const wDeck,const char*wFace[],
       const char*wSuit[]);
       void shuffle(Card*const wDeck);
       void deal(const Card*const wDeck);

int main(int argc, char *argv[]) {
    Card deck[CARDS];
    const char *face[]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King");
    
    const char*suit[]={"Hearts,"Diamonds","clubs","Spades"};
    
    srand(time(NULL));
    
    fillDeck(deck,face,suit);
    shuffle(deck);
    deal(deck);
    }
    void fillDeck(Card*const wDeck,const char*wFace[],const char*WSuit[])
    {
         for(size_t i=0;i<CARDS;++i){
            wDeck[i].face=wFace[i%FACES];
            wDeck[i].suit=wSuit[i/FACES];
        }
    }
    void shuffle(Card*const wDeck)
    {
        for(size_t i=0;i<CARDS;++i){
            size_t j=rand()%CARDS;
            Card temp=wDeck[i];
            wDeck[i]=wDeck[j];
            wDeck[j]=temp;
        }
    }
  
  	system("PAUSE");	
  	return 0;
}



