#include<stdio.h>
char s[300]="101010101011000010111101000011000110100010000111011001101010000001101111100101";
int main()
{
    int a=0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='1')a++;
        i++;
    }
    printf("�A��char�r��ƦW1���� : %d��",a);
    return 0;
}
