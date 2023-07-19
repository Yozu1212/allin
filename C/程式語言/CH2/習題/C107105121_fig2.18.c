#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("輸入季節中最高降雨量\n");
	scanf("%d",&a);
    printf("輸入一個今年降雨量\n");
    scanf("%d",&b);
    printf("輸入一個目前降雨量\n");
	scanf("%d",&c);
		if(c>a)
		{
		printf("有史以來最高降雨量為%d\n",c);
		} 
	system("PAUSE");
	return 0;
}
