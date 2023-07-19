#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("輸入用戶帳號");
	scanf("%d",&x);
	while(x != -1){
		printf("輸入信用額度");
		scanf("%d",&y);
		printf("更改後信用額度%d\n",y/2);
		printf("目前積欠金額");
		scanf("%d",&z);
		if(z <y/2){
			printf("用戶%d沒有超過信用額度\n",x);
		}
		else{
			printf("用戶%d超過信用額度\n",x);
		}
	printf("輸入用戶帳號");
	scanf("%d",&x);
	}
	system("PAUSE");
	return 0;
}
