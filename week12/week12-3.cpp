#include<stdio.h>
int b[10]={0,5,9,6,7,8,3,4,1,2};
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(int j=0;j<10;j++)
    {
    for(int i=j+1;i<10;i++)
    {
        if(b[j]>b[i])
        {
           int t=b[j];
           b[j]=b[i];
           b[i]=t;
        }
    }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
