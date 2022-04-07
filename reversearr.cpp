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
    
cout<<"array in reverse order";
    
for(i=n-1;i>=0;i--)
    
{
    
cout<<a[i];
    
}
    
    
return 0;

}