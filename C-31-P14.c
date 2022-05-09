// 2D Array with function;



#include <stdio.h>

// Fumction to display 
int display (int arr[3][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
    	printf ("%d\t", arr[i][j]);
    printf("\n\n");
    }
    return 0;

}

// Main Function

int main ()
{
  int arr1[3][3], arr2[3][3];
  int i = 0, j = 0;
  printf("Enter the values of 1st 2d 3x3 Array\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        scanf ("%d", &arr1[i][j]);
    printf ("\n");
    }
  printf("Enter the values of 2nd 2d 3x3 Array\n");
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        scanf ("%d", &arr2[i][j]);
    printf ("\n");
    }
    printf("The First Matrix elements are:\n");
    display(arr1);
    printf("\n");
    printf("The Second Matrix elements are:\n");
    display(arr2);
  return 0;
}
