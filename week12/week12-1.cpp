#include<stdio.h>
int b[10]={0,5,9,6,7,8,3,4,1,2};
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
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
    return 0;
}
