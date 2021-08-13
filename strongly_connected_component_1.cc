#include<bits/stdc++.h>
using namespace std;

#include"../lib/strongly_connected_component.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_3_C
  int n,m; cin >> n >> m;
  vector<vector<int>> adj(n);
  for(int i=0; i<m; ++i) {
    int s,t; cin >> s >> t;
    adj[s].push_back(t);
  }
  auto scc = StronglyConnectedComponent(adj);
  int q; cin >> q;
  while(q--) {
    int u,v; cin >> u >> v;
    cout << (scc.group_number[u] == scc.group_number[v]) << "\n";
  }
}
