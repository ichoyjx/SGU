/*
 * Given N and pair (A', B'),
 * find all pairs (A, B) that:
 *    for any integer X and Y,
 *       if A'X + B'Y is divided by N
 *       then AX + BY is divided by N too (0<= A,B <N).
 *
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

/*
  int gcd(int m, int n)
  {
    return n==0 ? gcd(n, m%n) :
  }
*/

int main()
{
  pair<int,int> ans[10000];
  int i=0, N, A0, B0, A, B;
  cin >> N >> A0 >> B0;

  A = (A0 %= N);
  B = (B0 %= N);

  do {
    ans[i] = make_pair(A, B);
    i++;
    A = (A + A0) % N;
    B = (B + B0) % N;
  } while (A!=A0 || B!=B0);

  sort(ans, ans + i);
  printf("%d\n", i);

  int j;
  for (j=0; j<i; j++) {
    printf("%d %d\n", ans[j].first, ans[j].second);
  }

  return 0;
}
