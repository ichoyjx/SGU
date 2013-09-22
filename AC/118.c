#include <stdio.h>

// (A+B) mod C = (A mod C) + (B mod C)
// (AB)  mod C = (A mod C) × (B mod C)

int main()
{
  int i, j, K, N, temp, m;
  long int A;
  scanf("%d",&K);

  for (i=0; i<K; i++) {
    scanf("%d",&N);
    m=1;
    A=0;

    for (j=0; j<N; j++) {
      scanf("%d",&temp);
      temp%=9;
      m=(m*temp)%9;
      A=(A+m)%9;
    }
    printf("%d\n",(A+8)%9+1);
  }

  return 0;
}
