#include<stdio.h>
#include<conio.h>
void main()
{
char s[3][10];
int i;
clrscr();
printf("enter three name");
for(i=0;i<=2;i++)
gets(s[i]);
for(i=0;i<=2;i++)
puts(s[i]);
getch();
}