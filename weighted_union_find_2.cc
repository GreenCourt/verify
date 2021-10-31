#include<bits/stdc++.h>
using namespace std;

#include"../lib/weighted_union_find.h"

int main() {
  // https://atcoder.jp/contests/arc106/tasks/arc106_b
  int n, m; cin >> n >> m;
  vector<int> a(n), b(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];

  WeightedUnionFind<int> uf(n);
  for(int i=0; i<m; ++i) {
    int c,d; cin >> c >> d; c--, d--;
    uf.unite(c,d,0);
  }

  for(auto g : uf.groups()) {
    long long asum=0, bsum=0;
    for(auto i : g) asum += a[i], bsum += b[i];
    if(asum != bsum) { puts("No"); return 0; }
  }
  puts("Yes");
}
