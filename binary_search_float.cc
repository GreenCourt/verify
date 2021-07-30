#include<bits/stdc++.h>
using namespace std;

#include"../lib/binary_search_float.h"

int main() {
  // https://atcoder.jp/contests/abc034/tasks/abc034_d
  int n,k; cin >> n >> k;
  vector<double> w(n), p(n);
  for(int i=0; i<n; ++i) cin >> w[i] >> p[i];

  auto f = [&](double x) {
    vector<double> v(n);
    for(int i=0; i<n; ++i) v[i] = w[i] * (p[i] - x);
    sort(v.begin(), v.end(), greater{});
    double sum = accumulate(v.begin(), v.begin()+k, 0.0);
    return sum > 0;
  };

  cout << fixed << setprecision(12) << BinarySearch(0.0, 100.0, 100, f) << endl;
}
