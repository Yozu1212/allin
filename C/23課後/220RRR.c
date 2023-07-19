#include <stdio.h>
int main(void)
{
 int time;
 printf("Enter one time:");
 scanf("%d",&time);
 printf("%d:%d:%d",time/3600,
 (time%3600)/60,time%3600%60);
 return 0;
}
