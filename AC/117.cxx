#include<stdio.h>

// base^pow % mod
int pow_mod(int base, int pow, int mod) {
  int reminder;
  if (pow == 1) {
    return base % mod;
  }
  reminder = pow_mod(base, pow/2, mod);
  reminder = reminder * reminder % mod;

  if (pow % 2) {
    return reminder * base % mod;
  } else {
    return reminder;
  }
}

int main() {
  int N, M, K;
  scanf("%d%d%d", &N, &M, &K);

  int i, num, count=0;
  for (i=0; i<N; i++) {
    scanf("%d", &num);
    if (pow_mod(num, M, K) == 0) {
      count++;
    }
  }

  printf("%d\n", count);
  return 0;
}
