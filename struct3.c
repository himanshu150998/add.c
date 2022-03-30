#include<stdio.h>
#include<conio.h>
struct student{
  char roll_no[20];
  char name[20];
  int sub[5];

};
void display(struct student s[],int n,int m)
{
 int sum=0,avg,i,j;
  for(i=0;i<n;i++)
 {
  printf("\n\n\nDetails of Student %d : \n",i+1);
  printf(" Name : ");
  printf("%s",s[i].name);
  printf("\nRoll No. : ");
  printf("%s",s[i].roll_no);
  for(j=0;j<m;j++)
  {
    sum+=s[i].sub[j];
  }
  avg=sum/m;
  printf("\nSum of No. : %d\nAvg No. : %d",sum,avg);
  if(avg>=80)
  {
   printf("\nGrade : A");
  }
  else if(avg<80 && avg>=40)
  {
   printf("\nGrade : B");
  }
  else
  {
   printf("\nGrade : C");
  }
 }
}
void main()
{
 struct student s[100];
 int n,m,i,j;
 clrscr();
 printf("Enter No. of Students :");
 scanf("%d",&n);
 printf("Enter No. of Subjects :");
 scanf("%d",&m);
 for(i=0;i<n;i++)
 {
  printf("Emter Details of Student %d :\n",i+1);
  printf("Enter Name :");
  scanf("%s",&s[i].name);
  printf("Enter Roll No. :");
  scanf("%s",&s[i].roll_no);
  printf("Enter Marks of Subjects out of 100 : \n");
  for(j=0;j<m;j++)
  {
   printf("Subject %d:",j+1);
   scanf("%d",&s[i].sub[j]);
  }
 }
 display(s,n,m);
 getch();
}