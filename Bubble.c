// Bubble Sort Program
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50], i, j, temp, n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("\nEnter array element (unsorted)");
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - 1) - i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted array:");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]= %d",i,arr[i]);
    }
    getch();
}