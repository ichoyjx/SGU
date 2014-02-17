#include <iostream>

using namespace std;

struct tank
{
  int _hit_points;
  int _score_points;
};

int main() {
  int N, M;
  cin >> N >> M ;

  tank t[N];
  int i;
  for (i=0; i<N; i++) {
    t[i]._hit_points = 100;
    t[i]._score_points = 0;
  }

  for (i=0; i<M; i++) {
    int shots, hits;
    cin >> shots >> hits;
    shots--;
    hits--;

    if (t[shots]._hit_points > 0) {
      if (t[hits]._hit_points > 0) {
        t[shots]._score_points += 3;
      }

      t[hits]._hit_points -= 8;
    }
  }

  for (i=0; i<N; i++) {
    if (t[i]._hit_points > 0) {
      cout << t[i]._hit_points << " " << (t[i]._score_points) + (t[i]._hit_points /2) << endl ;
    } else {
      cout << t[i]._hit_points << " " << (t[i]._score_points) << endl;
    }
  }

  return 0;
}
