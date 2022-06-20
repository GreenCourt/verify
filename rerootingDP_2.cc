#include<bits/stdc++.h>
using namespace std;

#include"../lib/rerootingDP.h"

// https://atcoder.jp/contests/dp/tasks/dp_v
int m;
struct V { V() {}; };
struct E { E() {}; };
using S=long long;
S e() { return 1; }
S opS(S a, S b) { return a * b % m; }
S opV(S s, V info) { return s; }
S opE(S s, E info) { return s+1; }

int main() {
  int n; cin >> n >> m;
  RerootingDP<S, V, E, opS, opV, opE, e> r(n);
  for(int i=0; i<n-1; ++i) {
    int s,t; cin >> s >> t; --s,--t;
    r.add_edge(s, t);
    r.add_edge(t, s);
  }
  r.solve();
  for(int i=0; i<n; ++i) cout << r.ans[i] << "\n";
}
