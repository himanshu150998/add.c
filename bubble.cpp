#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp,flag;
    int b=0;
   // int a[n];
    cout<<"enter the elements";
    cin>>n;
   int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            //flag=0;
            if(a[j]>a[j+1]){
            b++;
            cout<<"["<<b<<"]"<<endl;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            //flag=1;
        }
    }
   // if(flag==0)
    //break;
    }
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<endl;
    }
    return 0;
}
