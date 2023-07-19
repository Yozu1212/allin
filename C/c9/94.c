//柱 :d 
#include <stdio.h>
a) printf("%-8d\n", 40000);
b)scanf("%x",&hex);
c)
printf("使用正號打印200: %+d\n", 200);
printf("不使用正號打印200: % d\n", 200);
d)  printf("16進制100: %#x\n", 100);//0x64 

e)char s[100];
  char c;
  int i = 0;
while ((c = getchar()) != 'p') {s[i] = c;i++;}
s[i] = '\0'; 

   f) printf("%09.3f\n", 1.234);
   
   g)int hour, minute, second;
    printf("輸入時間（格式hh:mm:ss）：");
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("讀取值：%d 小時: %d 分鐘: %d 秒\n", hour, minute, second);
    
   h)char s[100];
   scanf("%*[\"]%[^\"]%*[\"]", s);
   
   i) scanf(time, "%d:%d:%d", &hour, &minute, &second);
    printf("%02d 小時 : %02d 分鐘 : %02d 秒\n", hour, minute, second);
