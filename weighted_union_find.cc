#include<bits/stdc++.h>
using namespace std;

#include"../lib/weighted_union_find.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
  int n,q; cin >> n >> q;
  WeightedUnionFind<int> uf(n);
  while(q--) {
    int t; cin >> t;
    if(t) {
      int x,y; cin >> x >> y;
      if(uf.same(x,y)) cout << uf.diff(x,y) << '\n';
      else cout << "?\n";
    }
    else {
      int x,y,z; cin >> x >> y >> z;
      uf.unite(x,y,z);
    }
  }
}
