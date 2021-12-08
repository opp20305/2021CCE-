#include<stdio.h>
void printspace(int n)
{
    for(int i=0;i<n;i++)printf(" ");
}
void printstar(int n)
{
    for(int i=0;i<n;i++)printf("*");
}
int main()
{
    for(int i=1;i<=15;i++)
    {
        printspace(15-i);
        printstar(i);
        printf("\n");
    }
}
