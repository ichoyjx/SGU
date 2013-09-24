#include <stdio.h>
#include <math.h>

#define MAX 10001
#define INF 10000000

bool isPrime(int num) {
  if (num < 2) {
    return false;
  }

  if (num == 2) {
    return true;
  }

  int i, end = sqrt(num);
  for (i=2; i<=end; i++) {
    if (num%i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int N, i, pos=0, index=0, super_prime[MAX], fun[MAX], group[MAX];
  scanf("%d", &N);

  super_prime[0] = 0; // "maybe one"
  for (i=1; i<=N; i++) {
    fun[i]=INF;
  }

  // get the super prime table
  for (i=1; i<=N; i++) {
    if (isPrime(i) == true) { // num is prime
      pos++;
      if (isPrime(pos) == true) { // position is prime too
        index++;
        super_prime[index] = i;
      } // inner if
    } // if
  } // for

  // find optimal presentation as a sum of super-primes
  int j;
  for (i=1; i<=index; i++) {
    for (j=super_prime[i]; j<=N; j++) {
      if (fun[j - super_prime[i]]+1 < fun[j]) {
        fun[j] = fun[j - super_prime[i]] + 1;
        group[j] = j - super_prime[i];
      }
    }
  } // for

  if (fun[N] == INF) {
    printf("0");
  } else {
    printf("%d\n%d", fun[N], N-group[N]);

    for (i=group[N]; i>0; i=group[i]) {
      printf(" %d", i-group[i]);
    }

    printf("\n");
  }

  return 0;
}
