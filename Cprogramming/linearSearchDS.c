#include<stdio.h>
int main()
{

    int  n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }

int search;



scanf("%d",&search);
int linear(arr,n,search);

void linear search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            count =1;
            break;
        }
    }
    if(count==1)
    {
        printf("linear value found");
        else
            printf("not found");
    }
}
}
