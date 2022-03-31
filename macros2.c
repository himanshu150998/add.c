#include<stdio.h>
#define fact
void main()
{
    int x=0;
    #ifndef fact
    x=10;
    printf("%d",x);
    #else
    scanf("%d",&x);
    printf("%d",x);
    #endif
}