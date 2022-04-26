#include<iostream>
using namespace std;
void print(int *a,int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//***********************SWAP**************
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//**********************partition******************
int partition(int a[], int low,int high)
{
    int i,j,pivot;
    pivot=a[low];
    i=low+1;
    j=high;
    do{
        while(a[i]<=pivot){
        i++;
        }
        while(a[j]>pivot){
        j--;
        }
        if(i<j){
            swap(a[i],a[j]);
          // temp=a[i];
          // a[i]=a[j];
           //a[j]=temp;
        }
        
    }while(i<j);
   swap(a[low],a[j]);
    //temp=a[low];
    //a[low]=a[j];
    //a[j]=temp;
    
    return j;
}
//*******************QUICKSORT*******************
void quicksort(int a[],int low,int high)
{
    int index;
    if(low<high){
        index=partition(a,low,high);
        quicksort(a,low,index - 1);
        quicksort(a,index + 1,high);
    }
}
//*************************MAIN********
int main()
{
    //int arr[]={6,9,4,5,0,2,3,11,5};
    //int n=sizeof (arr)/sizeof(int);
    int n,i;
    cout<<"enter the elements";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
   print(a,n);
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}