#include<bits/stdc++.h>
using namespace std;

#include"../lib/coordinate_compression_1d.h"

int main() {
  // https://atcoder.jp/contests/abc036/tasks/abc036_c
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  Compress1D c(a);
  for(int i=0; i<n; ++i) cout << c.compressed[i] << '\n';
}
