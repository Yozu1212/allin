#include <stdio.h>

int main() {
    int who;
 double week = 0, hm=0,ht=0, s=0,c=0,all=0;

    printf("�п�J���u�N�X (1=�g�z�H��, 2=���~�u, 3=������u, 4=�s�u): ");
    scanf("%d", &who);

    switch (who) {
        case 1:
            printf("�п�J�g�z�H�����g�~:");
            scanf("%lf", &all);
            break;
            
        case 2:
            printf("�п�J���~�u���C�p�ɤu��:");
            scanf("%lf", &hm);
            printf("�п�J���~�u���C�g�u�@�ɼ�: ");
            scanf("%lf", &ht);
            if (ht> 40.0) {
                all = ((ht - 40.0)*1.5)*hm+(40*hm);
            } else {
                all = (ht*hm);
            }
            break;
            
        case 3:
            printf("�п�J������u����g�P����B: ");
            scanf("%lf", &week);
            all = 250.0 + 0.057 *week;
            break;
            
        case 4:
            printf("�п�J�s�u�C�g�Ͳ������: ");
            scanf("%lf", &c);
            printf("�п�J�C�󪺹S��: ");
            scanf("%lf", &s);
            all = c * s;
            break;
            
        default:
            printf("�L�Ī����u�N�X\n");
            return 1 ;
            break;
    }

    printf("�o����u���g�~��: %.2lf ��\n", all);

    return 0;
}
