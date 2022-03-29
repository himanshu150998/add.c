#include<stdio.h>
struct student{
    int roll;
    char name[20];
    char grade;
    float subject[4];
    };
void display(struct student x)
{
    float sum,avg;
    printf("here the details\n");
    printf("Name:%s\n",x.name);
    printf("Roll no :%d\n",x.roll);
    printf("grade : %c\n",x.grade);
    for(int i=0;i<4;i++)
    {
        printf("subject %d : %.2f\n",i+1,x.subject[i]);
        sum+=x.subject[i];
        
    }
    printf("Sum is %.2f\n",sum);
    avg=sum/4;
    printf("average is %.2f",avg);
}
int main()
{
    struct student x={10,"manisha",'e',{77.22,56.33,56.55,45.22}};
    display(x);
    return 0;
}
    
    