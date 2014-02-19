// idea: simulation + 暴搜 (exhaustive search)
#include <iostream>
#include <malloc.h>

using namespace std;

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

  for (i=0; i<n-1; i++)
    cin >> p[i];

  for (i=0; i<m; i++)
    cin >> t[i];

  return 0;
}
