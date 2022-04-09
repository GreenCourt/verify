#include<bits/stdc++.h>
using namespace std;

#include"../lib/euler_tour.h"

int main() {
  // https://atcoder.jp/contests/abc213/tasks/abc213_d
  int n; cin >> n;
  vector<vector<int>> adj(n);
  for(int i=0; i<n-1; ++i) {
    int u,v; cin >> u >> v; --u, --v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for(int i=0; i<n; ++i) sort(adj[i].begin(), adj[i].end());
  EulerTour et(adj,0);
  for(int i=0; i<et.length; ++i) cout << 1+et.tour[i] << " \n"[i==et.length-1];
}
