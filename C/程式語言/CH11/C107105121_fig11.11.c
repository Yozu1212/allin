#include <stdio.h>
#include <stdlib.h>
struct clientData{
	unsigned int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *cfPtr;
	
	if((cfPtr = fopen("accounts.dat", "rb+")) == NULL){
		puts("File could not opened.");
	}
	else{
		struct clientData client = {0, "", "",0.0};
		
		printf("%s","Enter account number"
			   " (1 to 100, 0 to end input): ");
		scanf("%d", &client.acctNum);
		
		while(client.acctNum != 0){
			
			printf("%s","Enter lastname, firstname, balance: ");
			
			fscanf(stdin, "%14s%9s%1f", client.lastName, client.firstName, &client.balance);
			
			fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
			
			fwirte(&client, sizeof(struct clientData), 1, cfPtr);
			
			printf("%s", "Enter account number: ");
			scanf("%d", &client.acctNum);
		}
	fclose(cfPtr);
	}
	return 0;
}
