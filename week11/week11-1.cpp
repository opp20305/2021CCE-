#include<stdio.h>
int b[10000000]={0,0,0,0};
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(b[i]==0)
        {

            printf("%d ",i);
            for(int k=i+i;k<a;k+=i)
            {
                b[k]=1;
            }
        }
    }
    return 0;
}
