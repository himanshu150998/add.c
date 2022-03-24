#include <stdio.h>
#include<string.h>


int main() {
    char a[100]="abcde",b[]="aaceefffdd";
    int i,j,count=0,vali,valj;
    vali=strlen(b);
    valj=strlen(a);
    for(i=0;i<vali;i++)
    {
        for(j=0;j<valj;j++)
        {
            if(a[j]==b[i]){
                count++;
            }
        }
    }
    if(vali==count)
    printf("match found");
    else
    printf("match not found");
    
    return 0;
}