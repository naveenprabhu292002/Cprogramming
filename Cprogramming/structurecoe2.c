
#include<stdio.h>
struct emp
{
    char name[50];
    char gender[20];
    //int age;
};
int main()

{
struct emp e1;
    scanf("%s",e1.name);
    scanf("%s",e1.gender);
    printf("in alphapittic :\n%s\n%s",strupr(e1.name),strupr(e1.gender));

}
