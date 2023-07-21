#include<stdio.h>
struct emp
{

    int id;
    char empname[100];
    int age;
    float salary;
    int phoneno;


};
int main()
{
    struct emp e1;


    scanf("%d",&e1.id);
    scanf("%s",e1.empname);
    scanf("%d",&e1.age);
    scanf("%f",&e1.salary);
    scanf("%d",&e1.phoneno);
    printf("all values");
    printf("\n%d\n%s\n%d\n%f\n%d",e1.id,e1.empname,e1.age,e1.salary,e1.phoneno);
}


