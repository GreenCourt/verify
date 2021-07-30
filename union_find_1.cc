#include<bits/stdc++.h>
using namespace std;

#include"../lib/union_find.h"

int main() {
  // https://atcoder.jp/contests/practice2/tasks/practice2_a
  int n,q; cin >> n >> q;
  UnionFind uf(n);

  while(q--) {
    int t,u,v; cin >> t >> u >> v;
    if(t) cout << uf.find(u,v) << endl;
    else uf.unite(u,v);
  }
}
