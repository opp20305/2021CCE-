#include<stdio.h>
int b[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(int k=0;k<10-1;k++)
    {
    for(int i=0;i<10-1;i++)
    {
        if(b[i]>b[i+1])
        {
           int t=b[i];
           b[i]=b[i+1];
           b[i+1]=t;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    }
    return 0;
}
