#include <stdio.h>
int main()
{
	int a,b,c,enb;
	printf(" birinci say�y� giriniz");
	scanf("%d",&a);
	printf("ikinci say�y� giriniz");
	scanf("%d",&b);
	printf("�c�nc� say�y� giriniz");
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
	printf("en buyuk say� %d",enb);
}
