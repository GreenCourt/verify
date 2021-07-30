#include<bits/stdc++.h>
using namespace std;

#include"../lib/ford_fulkerson.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_6_A
  int n,m; cin >> n >> m;
  FordFulkerson ff(n);
  for(int i=0; i<m; ++i) {
    int u,v,c; cin >> u >> v >> c;
    ff.add_edge(u,v,c);
  }
  cout << ff.maxflow(0, n-1) << endl;
}
