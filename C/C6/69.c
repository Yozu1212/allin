#include <stdio.h>

int main(void) {
	int mathGrades[20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
  int grades[5][20] = {{01, 85, 76, 79,30,80,40,76, 79,30,80,40,76, 79,30,99,40, 79,80,40},
                           {20, 85, 76, 79,30,80,40,76, 79,30,80,40,76, 79,30,80,40, 79,80,40},
                            {30, 85, 76, 79,30,80,40,76, 79,30,80,40,76, 79,30,80,40, 79,30,40},
							{40, 85, 76, 79,30,80,40,76, 79,30,80,40,76, 79,30,80,40, 79,30,40},
							{50, 85, 76, 79,30,80,40,76, 79,30,80,40,76, 79,30,80,40, 79,30,80}};
							//test
							
/*A.	//int grades[5][20] ;
B.	//5 行
C.	//20 列
D.	//100
E.	//一個陣列 內容可能是科目成績 
F.	//grades[3][2]
G.*/	grades[1][2]=100 ;

/*H.	for (int i =0;i<=4;i++){
for (int j =0;j<=19;j++){
scanf( "%d",&grades[i][j] );
}}
*/
/*I.*/	for (int i =0;i<=4;i++){
for (int j =0;j<=19;j++){
grades[i][j] = 0 ;
}}

/*J.*/	grades[1][1] = mathGrades[20] ;

/*K.*/	for(size_t i = 0; i < 20;++i){ 
if(grades[1][i]>grades[1][i+1]){
int hold = grades[1][i];
grades[1][i] = grades[1][i+1];
grades[1][i+1] = hold;}
}printf("%3d ", grades[1][20]);

/*L.*/	for(int i = 0 ; i <20 ; i++){printf("%d\t",grades[2][i]);}

/*M.*/	int sum =0;
for(int i = 0 ; i <5 ; i++){
sum =sum + grades[i][1];}
printf("%d",sum/5);

/*N.*/	printf("   ");
for (int col = 0; col < 20; col++) {
printf("%3d ", col);}
printf("\n");
for (int row = 0; row < 5; row++) {
printf("%2d ", row);
for (int col = 0; col < 20; col++) {
printf("%3d ", grades[row][col]);
}printf("\n"); }


}

