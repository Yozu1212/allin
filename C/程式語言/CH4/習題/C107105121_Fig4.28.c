#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g;
	printf("請輸入代碼(1經理 2時薪工 3抽傭金 4零工):");
	scanf("%d",&a);
	while(a != -1){
		switch(a){
			case 1:
			printf("經理\n");
			printf("當週薪250\n");
			break;
			case 2:
			printf("時薪工\n");
			printf("請輸入當周工時:");
			scanf("%d",&b);
			if(b >= 40){
				c =40*140+(b-40)*140*1.5;
				printf("%.2f\n",c);
			}
			else{
				c =b*140;
				printf("%.2f\n",c);
			}
			break;
			case 3:
			printf("抽傭金\n");
			printf("請輸入當周銷售額:");
			scanf("%d",&d);
			e=250+d*0.057;
			printf("%d\n",e); 
			break;
			case 4:
			printf("零工\n");
			printf("請輸入當周製作總件數:");
			scanf("%d",&f);
			g = f * 10;
			printf("%d\n",g);
			break;
			default:
			printf("錯誤代碼\n");
			break;
			}
	printf("請輸入代碼(1經理 2時薪工 3抽傭金 4零工):");
	scanf("%d",&a);
	}
	system("PAUSE");
	return 0;
}
