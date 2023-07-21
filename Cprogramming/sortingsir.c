#include<stdio.h>
int main()
{

    int n;
    int temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]<arr[j+1])


            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("ans is: ");
    int m=arr[0]+arr[1];


    printf("%d",m);
    }

