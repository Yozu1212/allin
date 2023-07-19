#include <stdio.h>

int main() {
    int who;
 double week = 0, hm=0,ht=0, s=0,c=0,all=0;

    printf("請輸入員工代碼 (1=經理人員, 2=時薪工, 3=抽佣金工, 4=零工): ");
    scanf("%d", &who);

    switch (who) {
        case 1:
            printf("請輸入經理人員的週薪:");
            scanf("%lf", &all);
            break;
            
        case 2:
            printf("請輸入時薪工的每小時工資:");
            scanf("%lf", &hm);
            printf("請輸入時薪工的每週工作時數: ");
            scanf("%lf", &ht);
            if (ht> 40.0) {
                all = ((ht - 40.0)*1.5)*hm+(40*hm);
            } else {
                all = (ht*hm);
            }
            break;
            
        case 3:
            printf("請輸入抽佣金工的當週銷售金額: ");
            scanf("%lf", &week);
            all = 250.0 + 0.057 *week;
            break;
            
        case 4:
            printf("請輸入零工每週生產的件數: ");
            scanf("%lf", &c);
            printf("請輸入每件的酬金: ");
            scanf("%lf", &s);
            all = c * s;
            break;
            
        default:
            printf("無效的員工代碼\n");
            return 1 ;
            break;
    }

    printf("這位員工的週薪為: %.2lf 元\n", all);

    return 0;
}
