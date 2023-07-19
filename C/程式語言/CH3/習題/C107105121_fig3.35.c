int main (int arge,char *argv[]) 
{
		int a,b,c,d,e;
	for(a=100;a<1000;a++)
	{
		b=a/100;
		c=(a%100)/10;
		d=a%100%10;
		e=b*b*b+c*c*c+d*d*d;
		
		if(a==e)
		{
			printf("%d\n",a);
		}
	}
	system("PAUSE");
	return 0;
	}
