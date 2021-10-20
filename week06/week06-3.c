#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	printf("NOW a:%d,b:%d,c:%d\n",a,b,c);
	if(a>c)
	{
		d=a;
		a=c;
		c=d;
		printf("NOW a:%d,b=%d,c=%d\n",a,b,c);
	}
	if(b>c)
	{
		d=b;
		b=c;
		c=d;
		printf("NOW a:%d,b=%d,c=%d\n",a,b,c);
	}
	return 0;
}
