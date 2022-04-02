#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char c[50];
int i;
FILE *p;
clrscr();
p=fopen("abc.txt","w");
gets(c);
if(p==NULL)
{
printf("error");
exit(1);
}
for(i=0;i<strlen(c);i++)
fputc(c[i],p);
fclose(p);
getch();
}