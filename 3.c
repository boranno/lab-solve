#include<stdio.h>
int main()
{
    int size;
    printf("Enter total Student\n");
    scanf("%d",&size);
    int arr[size+1],avg=0,c=0;
    printf("Enter The Marks\n");
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&arr[i]);
        c++;
    }
    for(int i=0;i<=size;i++)
    {
        avg+=arr[i];
    }
    printf("Avg = %d\n",avg/c);

    return 0;
}

