#include<bits/stdc++.h>
using namespace std;

#include"../lib/breadth_first_search.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
  int n; cin >> n;
  vector<vector<int>> adjlist(n);
  for(int i=0; i<n; ++i) {
    int u,k; cin >> u >> k; --u;
    while(k--) {
      int v; cin >> v;
      adjlist[u].push_back(v-1);
    }
  }
  auto dist = distance_by_bfs(adjlist, 0);
  for(int i=0; i<n; ++i) cout << i+1 << " " << dist[i] << endl;
}
