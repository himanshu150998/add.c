#include<stdio.h>
#include<conio.h>
void main()
{
FILE *ekfile;
char r,w[50];
clrscr();
ekfile=fopen("myfile1.txt","r+");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
//fgets(r,40,ekfile);
//printf("%s",r);

//rewind(ekfile);
while(!feof(ekfile))
{
r=fgetc(ekfile);
printf("%c",r);
}
 gets(w);
fprintf(ekfile,"%s",w);
fclose(ekfile);
getch();
}