/* idea: simulation + 暴搜 (exhaustive search)
 *       think... reversely!
 */
#include <iostream>
#include <malloc.h>

#define PRECISION 3
#define N_MAX 20

using namespace std;

int pow (int base, int exponent) {
  int i;
  for (i=0; i<exponent-1; i++) {
    base *= base;
  }

  return base;
}

int main() {
  short i;

  /* input */
  short n, m;
  cin >> n >> m;

  short *x, *l, *p;
  float *t;
  x = (short *) malloc (n * sizeof(short));
  l = (short *) malloc (n * sizeof(short));
  p = (short *) malloc ( (n-1) * sizeof(short) );
  t = (float *) malloc (m * sizeof(float));

  for (i=0; i<n; i++)
    cin >> x[i];

  for (i=0; i<n; i++)
    cin >> l[i];

  short rope_tracker[N_MAX+1] = {0};
  for (i=0; i<n-1; i++) {
    cin >> p[i];
    rope_tracker[p[i]] = 1;
  }

  for (i=0; i<m; i++)
    cin >> t[i];

  /* find the last rope connects to the ball */
  for (i=1; i<n; i++) {
    if (rope_tracker[i] == 0) break;
  }
  short start = i; // reversely, will be the start point

  cout << i << endl;

  /* initialize time tracker */
  int t_max = t[m-1] * pow (10, PRECISION);
  float *pos;
  pos = (float *) malloc (t_max * t_max * sizeof(float));

  return 0;
}
