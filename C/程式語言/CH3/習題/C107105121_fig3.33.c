int main (int arge,char *argv[]) 
{
	int i,j,k;
	
	printf("請輸入矩形的邊長:");
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		if(j==1||j==i)
		{
			for(k=1;k<=i;k++)
			{
				printf("*");
			}
		}
		if(j>1&&j<i)
		{
			printf("*");
			for(k=2;k<=i-1;k++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
	}
