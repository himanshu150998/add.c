#include <iostream>
using namespace std;

int main() 

{

    
int i,n,a[100],j;
    
cout<<"enter the elements";
   
 cin>>n;
    
for(i=0;i<n;i++)
    
{
        
cin>>a[i];
    
}
    
    
for(i=0;i<n;i++)
    
{
        
for(j=i+1;j<n;j++){
            
if(a[i]==a[j])
            
            cout<<a[i];
        
}
    
}
    
    
return 0;

}