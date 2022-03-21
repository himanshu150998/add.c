#include <stdio.h>


int main() 

{
    
int i,n,arr[100],max=arr[0],min=arr[0];
 
printf("enter the elements");
    
scanf("%d",&n);
   
 for(i=0;i<n;i++)
    
{
        
scanf("%d",&arr[i]);
    
}
    
for(i=0;i<n;i++)
    
{
        
if(arr[i]>max)
        
max=arr[i];
        
if(arr[i]<min)
        
min=arr[i];
    
}
    
printf("max is %d and min is %d",max,min);
    
return 0;

}