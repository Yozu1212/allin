#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct card{
       char*face;
       char*suit;
};

int main(int argc, char *argv[]) {
	struct card aCard;
  	aCard.face="Ace";
  	aCard.suit="spades";
  	struct acrd *cardPtr=&aCard;
  	printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face,"of",aCard.suit,cardPtr->face,"of",cardPtr->suit,(*cardPtr).suit);
  	system("PAUSE");	
  	return 0;
}



