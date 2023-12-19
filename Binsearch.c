// Binary search
#include <stdio.h>
#include <conio.h>
void main()
{
    int low, high, mid, target, arr[50], n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("\nEnter element in an array");
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be search: ");
    scanf("%d", &target);
    low = 0;
    high = n;
    mid = (low + high) / 2;
    if (arr[mid] == target)
    {
        printf("%d is found at %d", target, mid);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (target > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            mid = (high + low) / 2;
            if (arr[mid] == target)
            {
                printf("%d found at %d", target, mid);
                break;
            }
        }
        if (i == n)
        {
            printf("%d not found", target);
        }
    }
    getch();
}
