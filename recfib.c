#include<stdio.h>
#include<conio.h>
int fib(int n)
{
   if(n==0)
   return 0;
   else if(n==1)
   return 1;
   else
   return (fib(n-1)+fib(n-2));
}
void main()
{
 int num,i;
 printf("Enter Range : ");
 scanf("%d",&num);
 printf("Fibonacci Serise :");
 for(i=0;i<num;i++)
 {
 printf("%d ",fib(i));
 }
 getch();
}