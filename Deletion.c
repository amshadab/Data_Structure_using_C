#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50], n, target, i,pos;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array element: ");
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter element which will be delete: ");
    scanf("%d", &target);
    printf("Enter possition of that number: ");
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);
    }
   for(i=pos;i<n-1;i++)
   {
    arr[i]=arr[i+1];
    printf("\narr[%d]=%d",i,arr[i]);

   }
   
    getch();
}