#include<stdio.h>
int b[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(b[i]>b[j])
			{
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
