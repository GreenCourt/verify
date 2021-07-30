#include<bits/stdc++.h>
using namespace std;

#include"../lib/dinic.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_6_A
  int n,m; cin >> n >> m;
  Dinic mf(n);
  for(int i=0; i<m; ++i) {
    int u,v,c; cin >> u >> v >> c;
    mf.add_edge(u,v,c);
  }
  cout << mf.maxflow(0, n-1) << endl;
}
