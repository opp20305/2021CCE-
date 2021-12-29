#include<stdio.h>
char s[300]="101010101011000010111101000011000110100010000111011001101010000001101111100101";
int main()
{
    int a=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')a++;
    }
    printf("For你的char字體數名1的數 : %d個",a);
    return 0;
}
