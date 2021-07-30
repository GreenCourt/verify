#include<bits/stdc++.h>
using namespace std;

#include"../lib/bellman-ford.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
  int n, m, source;
  cin >> n >> m >> source;
  vector<edge> edges(m);
  for(int i=0; i<m; i++) cin >> edges[i].from >> edges[i].to >> edges[i].dist;
  auto dist = bellman_ford(source, n, edges);
  if (dist.empty()) puts("NEGATIVE CYCLE"); 
  else for(auto d : dist) cout << (d==INF ? "INF" : to_string(d)) << endl;
}
