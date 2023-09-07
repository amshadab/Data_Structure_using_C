// Selection sort
#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[50], i, j, temp, n, minindex;
  printf("Enter array size: ");
  scanf("%d", &n);
  printf("\nEnter array element (unsorted)");
  for (i = 0; i < n; i++)
  {
    printf("\narr[%d]= ", i);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n-1; i++)
  {
    minindex = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minindex])
      {
        minindex = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
  }
  for (i = 0; i < n; i++)
  {
    printf("\narr[%d]=%d", i, arr[i]);
  }
  getch();
}