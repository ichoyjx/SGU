#include <stdio.h>

// greatest common divisor
int gcd(int m, int n) {
  int r = m%n;

  while (r) {
    m = n;
    n = r;
    r = m%n;
  }

  return n;
}

int main() {
  int N, c = 0, i = 1; // must start with 1 !
  scanf("%d", &N);

  for (; i<=N; i++) {
    if (gcd(N, i) == 1) // question hint
      c++;
  }

  printf("%d\n", c);
  return 0;
}
