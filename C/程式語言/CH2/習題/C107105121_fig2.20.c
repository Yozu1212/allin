#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  int hour;
  int min;
  int sec;
  int i;
  printf("經過的時間:\n");
  scanf("%d",&num);
  
  hour=num/3600;
  printf("使用了%d小時\n",hour);
  
  min=hour/60;
  printf("使用了%d分\n",min);
  
  sec=i*60;
  printf("使用了%d秒\n",sec);
  
  system("PAUSE");
  return 0;
}
