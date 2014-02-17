#include <stdio.h>

int main()
{
  int S[1000], N, K, p, base, t, i;
  scanf("%d %d", &N, &K);
  base = K / N;
  p = K % N;

  // try to find p
  for (t=1; t<N; t++)
    if ((t * p) % N == N-1)
      break;

  for (i=t; i!=N-1; i=(i+t) % N)
    S[i] = 1;

  S[N-1] = 1;

  for (i=0; i<N; i++)
    printf("%d ", S[i] + base);

  return 0;
}
