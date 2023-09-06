#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50],target,n,i;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter element in array: ");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter search element: ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            printf("%d found at %d",target,i);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is not found",target);
    }
    getch();

}