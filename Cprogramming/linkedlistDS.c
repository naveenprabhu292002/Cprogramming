#include<stdio.h>
#include<stdlib.h>
struct node
{

    int value;
    struct node *next;
}*head,*one=NULL,*two=NULL,*three=NULL;
void printlinkedlist(struct node *p)
{
    while(p!=NULL)
    {
printf("%d ",p->value);
        p=p->next;
    }
}
int main()
{

    one = malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    one->value=1;//scanf("%d",&one->value);
    two->value=2;
    three->value=3;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    printlinkedlist(head);

}
