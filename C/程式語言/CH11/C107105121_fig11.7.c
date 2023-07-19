#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *cfPtr;
	if((cfPtr = fopen("clients.text","r")) == NULL){
	puts("File could not be opened.");
	}
	else{
		printf("%s","Enter repuest\n"
		"1 - List accounts with zero balances\n"
		"2 - List accounts with credit balances\n"
		"3 - List accounts with debit balances\n"
		"4 - end of run?\n");
		unsigned int request;
		scanf("%u",&request);
		while(request != 4){
			unsigned int account;
			char name[30];
			double balance;
			fscanf(cfPtr,"%d%29s%1f",&account,name,&balance);
			switch(request){
				case 1:
					puts("\nAccounts with zero balances:");
					while(!feof(cfPtr)){
						if(balance == 0){
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
					fscanf(cfPtr,"%d%29s%1f",&account,name,&balance);
					}
				break;
				case 2:
					puts("\nAaccounts with credit balances:\n");
					while(!feof(cfPtr)){
						if(balance < 0){
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
					fscanf(cfPtr,"%d%29s%1f",&account,name,&balance);
					}
				break;
				case 3:
					puts("\nAaccounts with debit balances:\n");
					while(!feof(cfPtr)){
						if(balance > 0){
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
					fscanf(cfPtr,"%d%29s%1f",&account,name,&balance);
					}
				break;
			}
		rewind(cfPtr);
		printf("%s","\n? ");
		scanf("%d",&request);
		}
	puts("End of run.");
	fclose(cfPtr);
	}
	system("pause");
	return 0;
}
