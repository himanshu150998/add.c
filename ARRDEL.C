#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,position;
clrscr();
printf("enter the elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&position);
if(position>n)
printf("deletion not possible\n");
else
{
for(i=position-1;i<n-1;i++)
{
a[i]=a[i+1];
}
printf("Resultant array\n");
for(i=0;i<n-1;i++)
printf("%d",a[i]);
}
getch();
}


