#include<bits/stdc++.h>
using namespace std;

#include"../lib/lowest_common_ancestor.h"

int main() {
  // https://atcoder.jp/contests/abc152/tasks/abc152_f
  int n; cin >> n;
  vector<vector<int>> adj(n);
  vector edge_index(n, vector<int>(n, -1));
  for(int i=0; i<n-1; i++) {
    int a,b; cin >> a >> b; --a,--b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    edge_index[a][b] = i;
    edge_index[b][a] = i;
  }
  LowestCommonAncestor lca(adj);
  int m; cin >> m;
  vector<bitset<50>> x(m);
  for(int i=0; i<m; ++i) {
    int u,v; cin >> u >> v; --u,--v;
    auto p = lca.path(u,v);
    for(int j=1; j<p.size(); ++j) x[i].set(edge_index[p[j]][p[j-1]]);
  }
  long long ans = 0;
  for(int b = 0; b < (1<<m); ++b) {
    bitset<50> uni(0);
    for(int i = 0; i<m; ++i) if(b & (1<<i)) uni |= x[i];
    int c = uni.count();
    assert(c <= n-1);
    ans += (1LL << (n-1-c)) * (__builtin_popcount(b)%2 ? -1 : 1);
  }
  cout << ans << endl;
}
