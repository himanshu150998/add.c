#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *ekfile;
char r,w[50];
clrscr();
ekfile=fopen("myfile1.txt","rb");
if(ekfile==NULL)
{
printf("error");
exit(1);
}
//fgets(r,40,ekfile);
//printf("%s",r);
 //gets(w);
//fprintf(ekfile,"%s",w);
//printf("%d",ftell(ekfile));
//rewind(ekfile);
fseek( ekfile,5,SEEK_SET);
fseek( ekfile,-3,SEEK_END);
//fseek(ekfile,-4,SEEK_END);
while(!feof(ekfile))
{
r=fgetc(ekfile);
printf("%c",r);
}
//printf("%d",ftell(ekfile));

fclose(ekfile);
getch();
}