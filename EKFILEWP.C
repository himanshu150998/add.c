#include<stdio.h>
#include<conio.h>
void main()
{
FILE *ekfile;
char r,w[50];
clrscr();
ekfile=fopen("myfile1.txt","w+");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
//fgets(r,40,ekfile);
//printf("%s",r);
 gets(w);
fprintf(ekfile,"%s",w);
rewind(ekfile);
while(!feof(ekfile))
{
r=fgetc(ekfile);
printf("%c",r);
}

fclose(ekfile);
getch();
}