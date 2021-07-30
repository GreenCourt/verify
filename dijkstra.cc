#include<bits/stdc++.h>
using namespace std;

#include"../lib/dijkstra.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  int n, m, source;
  cin >> n >> m >> source;
  vector<vector<edge>> adjlist(n);
  for(int i=0; i<m; i++) {
    int v; edge e;
    cin >> v >> e.to >> e.dist;
    adjlist[v].push_back(e);
  }
  for(auto d : dijkstra(source, adjlist)) {
    if(d==INF) cout << "INF" << endl;
    else cout << d << endl;
  }
}
