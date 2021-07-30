#include<bits/stdc++.h>
using namespace std;
using ll=long long;

#include"../lib/ternary_search.h"

int main() {
  // https://atcoder.jp/contests/arc054/tasks/arc054_b
  double p; cin >> p;
  auto f = [&](double x) { return x + p / pow(2, x/1.5); };
  double x = ternary_search(0, p, 1000, f);
  printf("%.10lf\n", f(x));
}
