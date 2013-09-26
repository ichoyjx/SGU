#include <stdio.h>
#include <math.h>
int prime[30000], M=0;

int isP(int n) {
  int i, t=sqrt(n);
  if ((n != 2 && !(n % 2)) || (n != 3 && !(n % 3)) ||
      (n != 5 && !(n % 5)) || (n != 7 && !(n % 7))) {
    return 0;
  }

  for (i=2; i<=t; i++) {
    if (n%i == 0) {
      return 0;
    }
  }
  return 1;
}

int isNP(int n) {
  int i, t = sqrt(n), r;
  for (i=0; prime[i]<=t; i++) {
    if (n%prime[i] == 0) {
      r = n/prime[i];

      if (isP(r)) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int i=3, N, m;

  for (prime[M++]=2; i<32000; i+=2) {
    if (isP(i)) {
      prime[M++]=i;
    }
  }

  scanf("%d",&N);
  while (N--) {
    scanf("%d", &m);
    if (m == 6) {
      printf("Yes\n");
    } else {
      printf("%s\n", isNP(m) ? "Yes":"No");
    }
  }
  return 0;
}
