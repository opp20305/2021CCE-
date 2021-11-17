#include<stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
    {
     b=1;
        for(int j=2;j<i;j++)if(i%j==0)b=0;
     if(b==1)
     {
        c++;
        printf("%d ",i);
     }

    }
    printf("\n ¦¸¼Æ:%d \n",c);
    return 0;
}
