#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  int hour;
  int min;
  int sec;
  int i;
  printf("�g�L���ɶ�:\n");
  scanf("%d",&num);
  
  hour=num/3600;
  printf("�ϥΤF%d�p��\n",hour);
  
  min=hour/60;
  printf("�ϥΤF%d��\n",min);
  
  sec=i*60;
  printf("�ϥΤF%d��\n",sec);
  
  system("PAUSE");
  return 0;
}
