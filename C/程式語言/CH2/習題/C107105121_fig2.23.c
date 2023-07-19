#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a;
		int b;
		int c;
		printf("叫块计:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b&a>c){
		printf("程%d",a);
	} 
    if(b>a&b>c){
		printf("程%d",b);
	} 
	
	if(c>b&c>a){
		printf("程%d",c);
	} 
	if(c<b&c<a){
		printf("程%d",c);
	} 
	if(b<a&b<c){
		printf("程%d",b);
	} 
	if(a<b&a<c){
		printf("程%d",a);
	} 
	system("PAUSE");
	return 0;
}
