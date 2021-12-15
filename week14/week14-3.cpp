#include<stdio.h>
int b[3]= {10,20,30};
int c[3]= {40,50,60};
int a[3];///400 1000 1800
int main()
{
    for(int i=0;i<3;i++)
    {
        a[i]=b[i]*c[i];
    }
    int n=0;
    for(int i=0;i<3;i++)
    {
        n+=a[i];
    }
        printf("Ans = %d\n",n);

    return 0;
}
