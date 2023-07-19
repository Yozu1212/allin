#include<stdio.h>

struct card {  //定義一個結構 
	char *face; //兩個變數 
	char *suit;
};

int main(void){
	struct card aCard; //card 類型的aCard 
	
	aCard.face = "Ace"; //aCard 的face =ace 
	aCard.suit = "Spades";  //aCard 的suit =Spades
	struct card *cardPtr =&aCard; //card 型別 cardPtr指向 aCard位址 
	
	printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face," of ",aCard.suit, //印出三個字  ,aCard的face ,of aCard 的suit 
	cardPtr->face," of ",cardPtr->suit, // 指向的face , of , suit 
	(*cardPtr).face," of ",(*cardPtr).suit);
//指向的face , of , 只項的suit 
}
