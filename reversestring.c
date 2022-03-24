#include <stdio.h>
#include<string.h>


int main() {
    char a[100],val,i;
    printf("enter the string");
    scanf("%s",a);
    val=sizeof(a)/sizeof(a[0]);
    for(i=val;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}