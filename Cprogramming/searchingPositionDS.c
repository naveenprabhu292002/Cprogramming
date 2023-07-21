#include <stdio.h>

int main()
{
    int arr[100];
    int n,item,j=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the element to be searched: ");
    scanf("%d",&item);

    while(j<n)
    {
        if(arr[j]==item)
        {
            break;
        }
        j=j+1;
    }
    printf("the %d value is found in %d position",item,j+1);
}
