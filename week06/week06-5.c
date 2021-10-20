#include<stdio.h>
int main()
{
	int a,b,c,D;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c)
	{
		D=a;
		a=c;
		c=D;
	}
	if(b>c)
	{
		D=b;
		b=c;
		c=D;
	}
	if(a>b)
	{
		D=a;
		a=b;
		b=D;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
