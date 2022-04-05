#include<stdio.h>
#include<conio.h>
void main()
{
FILE *ekfile;
char r,w[50];
clrscr();
ekfile=fopen("myfile1.txt","a+");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
//fgets(r,40,ekfile);
//printf("%s",r);
 gets(w);
fprintf(ekfile,"%s",w);
printf("%d",ftell(ekfile));
rewind(ekfile);
while(!feof(ekfile))
{
r=fgetc(ekfile);
printf("%c",r);
}
printf("%d",ftell(ekfile));

fclose(ekfile);
getch();
}