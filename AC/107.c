#include <stdio.h>

// brutal search...
int main()
{
  int N,i=0;
  scanf("%d",&N);
  if (N<=8)
    printf("0\n");
  else if (N==9)
    printf("8\n");
  else
    {
      printf("72");
      for (; i<N-10; i++)
        printf("0");
      printf("\n");
    }
  return 0;
}
