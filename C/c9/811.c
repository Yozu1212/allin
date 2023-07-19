#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main() { //四個指向  建立內容文字 
     char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    char sum[100] ;
    
 // 使用時間作為亂數種子
    srand(time(NULL));

    // 產生20個句子
    for(int i = 0; i < 20; i++) {
        // 選擇陣列中的單詞
        char *a = article[rand() % 5]; //讓a = 陣列中亂數於5  
        char *n = noun[rand() % 5];//抽 
        char *v = verb[rand() % 5];//抽 
        char *p = preposition[rand() % 5]; //抽 
        
        // 將單詞串接在一起形成句子
        sprintf(sum, "%s %s %s %s", a, n, v, p);
        
        // 將句子的第一個字母轉為大寫
        sum[0] = toupper(sum[0]);
        
        // 印出句子
        printf("%s\n", sum);
    }
    
    return 0;
}
