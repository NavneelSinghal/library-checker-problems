#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

const int LIM = 5010;

int S[LIM][LIM];

void gen_S(int p) {
  S[0][0] = 1;
  for (int i = 1; i < LIM; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      int &x = S[i][j];
      if (j) x += S[i - 1][j - 1];
      x += S[i - 1][j] * j;
      x %= p;
    }
  }
}

void TLE() {
  while (1) {}
}

int main() {
  int T, p;
  scanf("%d %d", &T, &p);

  gen_S(p);

  for (int t = 0; t < T; ++t) {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    if (n >= LIM) { TLE(); }
    printf("%d\n", S[n][k]);
  }
  return 0;
}
