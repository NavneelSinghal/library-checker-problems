#include <cstdlib>

#include "../params.h"
#include "base.hpp"
#include "random.h"

int main(int, char *argv[]) {
  const int case_index = std::atoll(argv[1]);
  Random gen(case_index ^ 13428581043660426568ULL);

  const int N = N_MAX;
  const int Q = gen.uniform<int>(Q_MIN, Q_MAX);

  std::vector<int> P(N);
  std::iota(P.begin(), P.end(), 0);

  std::vector<std::pair<int, int>> qs(Q);
  for (auto &[l, r]: qs) {
    std::tie(l, r) = gen.uniform_pair(0, N + 1);
    r -= 1;
  }

  std::printf("%d %d\n", N, Q);
  for (int i = 0; i < N; i++) { std::printf("%d%c", P[i], " \n"[i + 1 == N]); }
  for (const auto &[l, r]: qs) { std::printf("%d %d\n", l, r); }

  return 0;
}
