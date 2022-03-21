#include <iostream>

#include<climits>

using namespace std;

int main() 
{
    
int i,n,a[100];
    
cout<<"enter the elements";
    
cin>>n;
    
for(i=0;i<n;i++)
    
{
        
cin>>a[i];
        
    
}
    
int largest=INT_MIN;
    
int secondLargest=INT_MIN;
   
 for(i=0;i<n;i++)
    
{
        
if(a[i]>largest)
        
{
            
secondLargest=largest;
            
largest=a[i];
        
}
        
else
        
{
            
if(a[i]>secondLargest && a[i]<largest)
           
secondLargest=a[i];
        
}
    
}
    
printf("secondLargest is %d\n",secondLargest);

    
return 0;

}