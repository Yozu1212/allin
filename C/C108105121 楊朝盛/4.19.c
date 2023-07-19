#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	int x;
    float a,b,c,d,e;
    printf("請輸入產品編號:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("輸入一天銷量");
	scanf("%f",&a); 
    break; 
    case 2:
    printf("輸入一天銷量"); 
    scanf("%f",&b); 
	break;
	case 3:
    printf("輸入一天銷量"); 
    scanf("%f",&c); 
	break; 
    case 4:
    printf("輸入一天銷量"); 
    scanf("%f",&d); 
	break;
	case 5:
    printf("輸入一天銷量"); 
    scanf("%f",&e); 
	break;  
    default:
    printf("查無產品"); 
    }
	if(x == 1)
	{
	a *= (float)2.98;
	printf("總獲利:%.2f\n",a); 
	}
	else if(x == 2)
	{
	b *= (float)4.50;
	printf("總獲利:%.2f\n",b); 
	}
	else if(x == 3)
	{
	c *= (float)9.98;
	printf("總獲利:%.2f\n",c); 
	}
	else if(x == 4)
	{
	d *= (float)4.49;
	printf("總獲利:%.2f\n",d); 
	}
	else if(x == 5)
	{
	e *= (float)6.87;
	printf("總獲利:%.2f\n",e); 
	}
	system("PAUSE");
	return 0;
}
