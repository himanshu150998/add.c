#include <stdio.h>
#include<string.h>


int main() {
    int a=50,n;
    int *b=&a;
    int **c=&b;
    int ***d=&c;

    printf("enter the value of n");
    scanf("%d",&n);
    ***d=n;
    printf("%d\n",a);
    return 0;
}