// Insertion sort
#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[50], i, n, key, j;
  printf("Enter array size: ");
  scanf("%d", &n);
  printf("\nEnter array element (unsorted)");
  for (i = 0; i < n; i++)
  {
    printf("\narr[%d]= ", i);
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < n; i++)
  {
    key = arr[i];
    for (j = i - 1; j >= 0 && key < arr[j]; j--)
    { 
      arr[j+1]=arr[j];
    }
    arr[j+1]=key;
  }
  for (i = 0; i < n; i++)
  {
    printf("\narr[%d]=%d", i, arr[i]);
  }
  getch();
}