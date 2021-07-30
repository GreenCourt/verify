#include<bits/stdc++.h>
using namespace std;

#include"../lib/warshall-floyd.h"

signed main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
  int n,m;
  cin >> n >> m;
  vector<vector<long long>> adjmatrix(n, vector<long long>(n, INF));
  for(int i=0; i<n; i++) adjmatrix[i][i] = 0;
  for(int i=0; i<m; i++) {
    int from, to, dist;
    cin >> from >> to >> dist;
    adjmatrix[from][to] = dist;
  }
  auto dist = warshall_floyd(adjmatrix);
  for(int i=0; i<n; i++) if(dist[i][i] < 0) {puts("NEGATIVE CYCLE"); return 0;};
  for(int i=0; i<n; i++) for(int j=0; j<n; j++)
    cout << (dist[i][j]==INF ? "INF" : to_string(dist[i][j])) << (j==n-1 ? "\n" : " ");
}
