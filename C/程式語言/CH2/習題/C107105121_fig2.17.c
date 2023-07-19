#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int u,a,t;
	printf("請輸入初始速度\n");
	scanf("%d",&u);
	printf("請輸入加速度\n");
	scanf("%d",&a);
	printf("請輸入時間\n");
	scanf("%d",&t);
	printf("最終數度是%d\n",u+a*t);
	printf("所經過的距離是%d\n",u*t+a*1/2*(t*t));

	system("PAUSE");
	return 0;
}
