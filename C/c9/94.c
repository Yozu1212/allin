//�W :d 
#include <stdio.h>
a) printf("%-8d\n", 40000);
b)scanf("%x",&hex);
c)
printf("�ϥΥ������L200: %+d\n", 200);
printf("���ϥΥ������L200: % d\n", 200);
d)  printf("16�i��100: %#x\n", 100);//0x64 

e)char s[100];
  char c;
  int i = 0;
while ((c = getchar()) != 'p') {s[i] = c;i++;}
s[i] = '\0'; 

   f) printf("%09.3f\n", 1.234);
   
   g)int hour, minute, second;
    printf("��J�ɶ��]�榡hh:mm:ss�^�G");
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("Ū���ȡG%d �p��: %d ����: %d ��\n", hour, minute, second);
    
   h)char s[100];
   scanf("%*[\"]%[^\"]%*[\"]", s);
   
   i) scanf(time, "%d:%d:%d", &hour, &minute, &second);
    printf("%02d �p�� : %02d ���� : %02d ��\n", hour, minute, second);
