#include<stdio.h>

struct card {  //�w�q�@�ӵ��c 
	char *face; //����ܼ� 
	char *suit;
};

int main(void){
	struct card aCard; //card ������aCard 
	
	aCard.face = "Ace"; //aCard ��face =ace 
	aCard.suit = "Spades";  //aCard ��suit =Spades
	struct card *cardPtr =&aCard; //card ���O cardPtr���V aCard��} 
	
	printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face," of ",aCard.suit, //�L�X�T�Ӧr  ,aCard��face ,of aCard ��suit 
	cardPtr->face," of ",cardPtr->suit, // ���V��face , of , suit 
	(*cardPtr).face," of ",(*cardPtr).suit);
//���V��face , of , �u����suit 
}
