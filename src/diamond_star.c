// Online C compiler to run C program online for diamond *
#include <stdio.h>

int main()
{
  int no_of_rows;

  printf("Enter number of rows\n");
  scanf("%d", &no_of_rows);

  for (int i=1; i<=no_of_rows; i++)
  {
      for (int j=1; j<=(no_of_rows-i); j++)
      {
          printf(" ");
      }
      for (int j=1; j<=2*i-1; j++)
      {
          printf("*");
      }
      printf("\n");
  }
  
  for (int i=1; i<=no_of_rows-1; i++)
  {
      for (int j=1; j<= i; j++)
      {
          printf(" ");
      }
      for (int j=1; j<=2*(no_of_rows-i)-1; j++)
      {
          printf("*");
      }
      printf("\n");
  }
  
  return 0;
}