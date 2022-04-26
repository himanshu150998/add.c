#include<iostream>
using namespace std;
void print(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void merge(int a[],int low,int mid,int high)
{
    int vis[100];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            vis[k]=a[i];
            k++;
            i++;
        }
        else
        {
            vis[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        vis[k]=a[i];
            k++;
            i++;
    }
    while(j<=high){
        vis[k]=a[j];
            k++;
            j++;
    }
    for(int b=0;b<=high;b++){
        a[b]=vis[b];
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low ,mid,high);
    }
}
int main()
{
    int n,i;
    cout<<"enter the elements";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print(a,n);
    cout<<endl;
    mergesort(a,0,n-1);
    print(a,n);
    return 0;
}