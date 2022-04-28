#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
}
void maxheap(int a[],int i,int n)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && a[left]>a[largest])
    largest=left;
    if(right<n && a[right]>a[largest])
    largest=right;
    if(i!=largest){
        swap(&a[largest],&a[i]);
        maxheap(a,largest,n);
    }
}
void heap(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        maxheap(a,i,n);
    }
    for(int s=n-1;s>=0;s--)
    {
        swap(&a[0],&a[s]);
        maxheap(a,0,s);
    }
}
int main()
{
    int n,i;
    cout<<"enter the elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    heap(arr,n);
    print(arr,n);
}