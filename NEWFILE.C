#include<stdio.h>
#include<conio.h>
void main()
{
int eid,addr;
 int mob;
char name[50],des[50];
FILE *p;
clrscr();
p=fopen("myfile2.txt","w");
if(p==NULL)
{
printf("file not found");
exit(1);
}
printf("enter the employee id\n");
scanf("%d",&eid);
fflush(stdin);
printf("enter the name\n");
gets(name);
fflush(stdin);
printf("enter the address\n");
scanf("%d",&addr);
fflush(stdin);
printf("enter the mobile no.\n");
scanf("%d",&mob);
fflush(stdin);
printf("enter the designation\n");
gets(des);
fprintf(p,"%d %s %d %d %s",eid,name,addr,mob,des);
rewind(p);
fscanf(p,"%d %s %d %d %s",&eid,name,&addr,&mob,des);
printf("%d\n %s\n %d\n %d\n %s\n",eid,name,addr,mob,des);
fclose(p);
getch();
}
