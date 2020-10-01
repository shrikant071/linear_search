#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *array, search, c, n, count=0;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  array = malloc((n-1)*sizeof(int));
  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", (array+c));
  printf("Enter a number to search: ");
  scanf("%d", &search);
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)  
    {
      printf("%d is present at location %d.\n", search, c+1);
      count++;
    }
  }
  if (count==0)
    printf("%d isn't present in the array.\n", search);
}
