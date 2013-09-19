#include <stdio.h>

int main()
{
  int N;
  scanf("%d",&N);
  N--;

  // here is the trick!
  // you should not test it one by one!
  printf("%d\n", N-(N/3));
  return 0;
}
