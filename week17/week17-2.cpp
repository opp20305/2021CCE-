#include<stdio.h>
int main()
{
    int n=20221991;
    while(n>0)
    {
        printf("%d => %d %d\n",n,n/10,n%10);
        n=n/10;
    }
    return 0;
}
