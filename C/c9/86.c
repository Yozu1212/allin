#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("�п�J�@���r: ");
    fgets(s, 100, stdin); //fgets Ū���촫�� �A�Ѽ�1 ��m ,2����X�� , 3�зǿ�J��y 
    
    for(int i = 0; i < strlen(s); i++) { // strlen �r����� 
        if(isalpha(s[i])) { //�p�GSi���O�r�� 
            if(islower(s[i])) { // �p�G�O�p�g 
                s[i] = toupper(s[i]); //�ܤj�g 
            } else {
                s[i] = tolower(s[i]); //�_�h�K�p�g 
            }
        }
    }
    printf("�j�p�g�ഫ�᪺��r��: %s", s);
    return 0; //�W 
}

