#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,position,value;
clrscr();
printf("enter the elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&position);
printf("enter the valus to be inserted");
scanf("%d",&value);
for(i=n-1;i>position;i--)
a[i+1]=a[i];
a[position-1]=value;
printf("Resultant array\n");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
getch();
}


