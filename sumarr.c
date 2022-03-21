#include <stdio.h>


int main() 

{
    
int i,n,arr[100],sum=0;
   
 printf("enter the elements");
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&arr[i]);
    
}
    
for(i=0;i<n;i++)
    
{
        
printf("%d",arr[i]);
        
sum+=arr[i];
    
}
    
printf("sum is %d",sum);
    
return 0;

}