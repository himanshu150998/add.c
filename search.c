#include <stdio.h>


int main() 

{

    
int i,n,a[100],key,found;
    
printf("enter the elements");
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&a[i]);
    
}
    
printf("enter the key");
    
scanf("%d",&key);
    
found=0;
    
for(i=0;i<n;i++)
    
{
        
if(a[i]==key){
            
found=1;
           
 break;
        
}
    
}
    
if(found==1)
    
printf("%d elents is found at %d position",key,i+1);
    
else
    
printf("%d elements is not found in array",key);
    
    
return 0;

}