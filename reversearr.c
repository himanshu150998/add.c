#include <stdio.h>


int main() 

{

    
int i,n,a[100],j;
    
printf("enter the elements");
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&a[i]);
    
}
    
printf("array in reverse order");
    
for(i=n-1;i>=0;i--)
    
{
    
printf("%d",a[i]);
    
}
    
    
return 0;

}