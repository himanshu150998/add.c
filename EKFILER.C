#include<stdio.h>
#include<conio.h>
void main()
{
FILE *ekfile;
char r[50],w[50];
clrscr();
ekfile=fopen("myfile.txt","r");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
fgets(r,40,ekfile);
printf("%s",r);
//gets(w);
//fprintf(ekfile,"%s",w);
fclose(ekfile);
getch();
}