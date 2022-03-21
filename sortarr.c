#include <stdio.h>


int main() 

{

    
int i,n,a[100],temp,j;
    
printf("enter the elements");
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&a[i]);
    
}
    
for(i=0;i<n;i++)
    
{
        
for(j=i+1;j<n;j++)
{
    
if(a[i]>a[j])
    
{
        
temp=a[i];
        
a[i]=a[j];
        
a[j]=temp;
        
    
}
        
}
    
}
    
printf("element of array in asc ending order");
    
for(i=0;i<n;i++)
    
{
    
printf("%d\n",a[i]);
    
}
    
return 0;

}