#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SUITS 4
#define FACES 13 
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES],const char *wFace[],const char *wSuit[]);

int main(void)
{
	unsigned int deck [SUITS][FACES]={0};
	
	srand(time(NULL));
	shuffle(deck);
	const char *suit[SUITS] ={"Hearts","Diamonds","Clubs","Spades"};
	const char *face[FACES]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eigh","Nine","Ten","Jack","Queen","King"};
	deal(deck,face,suit);
	
} 
void shuffle(unsigned int wDeck[][FACES])
{
	size_t card=1;
	for(card=1;card<=CARDS;++card)
	{
		size_t row;
		size_t column;
		do
		{
			row=rand()%SUITS;
			column=rand()% FACES;
		}while(wDeck[row][column]!=0);
		wDeck[row][column]=card;
	}
}
void deal(unsigned int wDeck[][FACES],const char *wFace[],const char *wSuit[])
{
	size_t card=1;
	size_t row=0;
	size_t column=0;
	for(card=1;card<=CARDS;++card)
	{
		for(row=0;row<SUITS;++row)
		{
			for(column=0;column<FACES;++column)
			{
				if(wDeck[row][column]==card)
				{
					printf("%5s of %-8s%c",wFace[column],wSuit[row],card%2==0?'\n':'\t');
				}
			}
		}
	}
}

