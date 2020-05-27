#include <stdio.h>
int main()
{
	int a,b,c,enb;
	printf(" birinci sayýyý giriniz");
	scanf("%d",&a);
	printf("ikinci sayýyý giriniz");
	scanf("%d",&b);
	printf("ücüncü sayýyý giriniz");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			enb=a;
		}
		else 
		{
			enb=c;
		}
	}
	else
	{
		if(b>c)
		{
			enb=b;
		}
		else
		{
			enb=c;
		}
	}
	printf("en buyuk sayý %d",enb);
}
