#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("�п�J�j�p:");
   scanf("%d",&n);
   printf("\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)printf(" ");

		for(int k=1;k<=n;k++)printf("*");
		printf("\n");
	}

   return 0;
}
