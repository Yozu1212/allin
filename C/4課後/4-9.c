#include <stdio.h>

int main(void) {
	 int n=0,b=0,r=0;
 double a = 0.0;
 
 printf("�п�J�ƭȭӼ�");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
 
  scanf("%d",&r);
 r = r+r;}
 a =(double)r/(double)n;
 
    printf("�M�� %d�A�����Ƭ� %.2f\n",r, a);
 
   return 0;
}
