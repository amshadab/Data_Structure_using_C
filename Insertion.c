#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50], n, target, i, pos, temp;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array element: ");
    for (i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter element which will be insert: ");
    scanf("%d", &target);
    printf("Enter possition of that number: ");
    scanf("%d", &pos);
    for (i = 0; i < n; i++)

    {
        if (i == pos)
        {
            temp = arr[pos];
            arr[pos] = target;
            printf("\narr[%d]=%d", pos, target);
           
            
        }
        if(i!=pos){
        printf("\narr[%d]=%d", i, arr[i]);
        }
    }

    getch();
}