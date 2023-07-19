#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("請輸入一行文字: ");
    fgets(s, 100, stdin); //fgets 讀取到換行 ，參數1 位置 ,2直到幾個 , 3標準輸入串流 
    
    for(int i = 0; i < strlen(s); i++) { // strlen 字串長度 
        if(isalpha(s[i])) { //如果Si項是字母 
            if(islower(s[i])) { // 如果是小寫 
                s[i] = toupper(s[i]); //變大寫 
            } else {
                s[i] = tolower(s[i]); //否則便小寫 
            }
        }
    }
    printf("大小寫轉換後的文字為: %s", s);
    return 0; //柱 
}

