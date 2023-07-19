#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define CARDS 52
struct bitCard
{
	unsigned int face : 4;
	unsigned int suit : 2;
	unsigned int color : 1;
}; 
typedef struct bitCard Card;
void fillDeck(Card * const wDeck);
void deal(const Card*const wDeck);

int main(int argc, char *argv[]) {
	Card deck[CARDS];
	
	fillDeck(deck);
	
	puts("Card value 0-12 correspond to Ace through King");
	puts("Suit values 0-3 correspond Hearts,Diamond,Clubs and Spades");
	puts("Color values 0-1 correspond to red and black\n");
	deal(deck); 
}

void fillDeck(Card * const wDeck)
{
	size_t i=0;
		for(i=0;i<CARDS;++i)
		{
			wDeck[i].face=i%(CARDS/4);
			wDeck[i].suit=i/(CARDS/4);
			wDeck[i].color=i/(CARDS/2);	
		}
}

void deal(const Card*const wDeck)
{
	printf("%-6s%-6s%-15s%-6s%-6s%s\n","Card","Suit","Color","Card","Suit","Color");
	size_t k1=0,k2=0;
		for(k1=0,k2=k1+26;k1<CARDS/2;++k1,++k2)
		{
			printf("%-6d%-6d%-15d",wDeck[k1].face,wDeck[k1].suit,wDeck[k1].color);
			printf("%-6d%-6d%d\n",wDeck[k2].face,wDeck[k2].suit,wDeck[k2].color);
		}
}

