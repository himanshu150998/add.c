#include <iostream>
using namespace std;


int main() {
    int a=50,n;
    int *b=&a;
    int **c=&b;
    int ***d=&c;

    cout<<"enter the value of n";
    cin>>n;
    ***d=n;
cout<<a;
    return 0;
}