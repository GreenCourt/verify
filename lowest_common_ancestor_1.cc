#include<bits/stdc++.h>
using namespace std;

#include"../lib/lowest_common_ancestor.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_C
  int n ; cin >> n;
  vector<vector<int>> adj(n);
  for(int i=0; i<n; ++i) {
    int k; cin >> k;
    adj[i].resize(k);
    for(int j=0; j<k; ++j) cin >> adj[i][j];
  }
  LowestCommonAncestor lca(adj);
  int q; cin >> q;
  while(q--) {
    int u,v; cin >> u >> v;
    cout << lca.lca(u,v) << endl;
  }
}
