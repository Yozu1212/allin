#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a;
		int b;
		int c;
		printf("�п�J�T�ӼƦr:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b&a>c){
		printf("�̤j��%d",a);
	} 
    if(b>a&b>c){
		printf("�̤j��%d",b);
	} 
	
	if(c>b&c>a){
		printf("�̤j��%d",c);
	} 
	if(c<b&c<a){
		printf("�̤p��%d",c);
	} 
	if(b<a&b<c){
		printf("�̤p��%d",b);
	} 
	if(a<b&a<c){
		printf("�̤p��%d",a);
	} 
	system("PAUSE");
	return 0;
}
