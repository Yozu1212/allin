#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main() { //�|�ӫ��V  �إߤ��e��r 
     char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    char sum[100] ;
    
 // �ϥήɶ��@���üƺؤl
    srand(time(NULL));

    // ����20�ӥy�l
    for(int i = 0; i < 20; i++) {
        // ��ܰ}�C�������
        char *a = article[rand() % 5]; //��a = �}�C���üƩ�5  
        char *n = noun[rand() % 5];//�� 
        char *v = verb[rand() % 5];//�� 
        char *p = preposition[rand() % 5]; //�� 
        
        // �N����걵�b�@�_�Φ��y�l
        sprintf(sum, "%s %s %s %s", a, n, v, p);
        
        // �N�y�l���Ĥ@�Ӧr���ର�j�g
        sum[0] = toupper(sum[0]);
        
        // �L�X�y�l
        printf("%s\n", sum);
    }
    
    return 0;
}
