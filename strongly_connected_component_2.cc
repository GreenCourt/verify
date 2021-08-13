#include<bits/stdc++.h>
using namespace std;

#include"../lib/strongly_connected_component.h"

int main() {
  // https://atcoder.jp/contests/practice2/tasks/practice2_g
  int n,m; cin >> n >> m;
  vector<vector<int>> adj(n);
  for(int i=0;i<m;++i) {
    int a,b; cin >> a >> b;
    adj[a].push_back(b);
  }
  StronglyConnectedComponent scc(adj);
  cout << scc.groups.size() << '\n';
  for(auto& g : scc.groups) {
    int sz = g.size();
    cout << sz;
    for(int i=0; i<sz; ++i) cout << ' ' << g[i];
    cout << '\n';
  }
}
