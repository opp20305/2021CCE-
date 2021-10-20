#include <stdio.h>
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
	if(a+b<=c)printf("錯誤");
	else if (a*a+b*b==c*c)printf("直角");
	else if (a*a+b*b>c*c)printf("銳角");
	else if(a*a+b*b<c*c)printf("鈍角");
	return 0;
}
