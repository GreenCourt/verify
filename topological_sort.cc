#include<bits/stdc++.h>
using namespace std;

#include "../lib/topological_sort.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n);
  for(int i=0; i<m; ++i) {
    int s,t; cin >> s >> t;
    adj[s].push_back(t);
  }
  vector ans = topological_sort(adj);
  assert(ans.size()==n);
  for(int u:ans) cout << u << '\n';
}
