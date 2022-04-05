#include<stdio.h>
#include<conio.h>
void main()
{
FILE *ekfile;
char r[50],w[50];
clrscr();
ekfile=fopen("myfile.txt","w");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
gets(w);
fputs(w,ekfile);
fclose(ekfile);
getch();
}