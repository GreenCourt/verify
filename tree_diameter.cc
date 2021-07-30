#include<bits/stdc++.h>
using namespace std;

#include"../lib/tree_diameter.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A
  int n; cin >> n;
  vector<vector<edge>> adj(n);
  for(int i=0; i<n-1; ++i) {
    int s,t,w; cin >> s >> t >> w;
    adj[s].push_back({t,w});
    adj[t].push_back({s,w});
  }
  cout << get<0>(tree_diameter(adj)) << endl;
}
