#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  int x[7];
  int *y;

  for (i = 0; i < 7; i++)
    x[i] = 0;

  for (i = 0; i < 7; i++)
    {
      printf ("Masukkan nilai i : ");
      scanf ("%d", &x[i]);
    }
 
  printf("_________________\n");
  printf("array statis : \n");

  for (i = 0; i < 7; i++)
    printf ("i ke %d,\tx[i] = %d\n", i, x[i]);

  y = (int *)malloc(7*sizeof(int));
  printf("_________________\n");
  printf("array dinamis : \n");

  for (i = 0; i < 7; i++)
    y[i] = x[i];


  for (i = 0; i < 7; i++)
    printf ("i ke %d,\ty[i] =  %d\n", i, y[i]);
  free (y);
}