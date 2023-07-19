#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	FILE *cfPtr;
	if((cfPtr = fopen("clients.text","w")) == NULL){
		puts("File could not be opened.");
	}
	else{
		puts("Enter the account,name,and balance.");
		puts("Enter EOF to end input");
		printf("%s","? ");
		unsigned int account;
		char name[30];
		double balance;
		scanf("%d%29s%1f",&account,name,&balance);
		while(!feof(stdin)){
			fprintf(cfPtr,"%d %s %.2f\n",account,name,balance);
			printf("%s","? ");
			scanf("%d%29s%1f",&account,name,&balance);
		}
	fclose(cfPtr);
	}
	system("pause");
	return 0;
}
