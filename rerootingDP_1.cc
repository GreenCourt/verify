#include<bits/stdc++.h>
using namespace std;

#include"../lib/rerootingDP.h"

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_A
struct V { V() {}; };
struct E { int w; E(int w) : w(w) {}; };
using S=int;
S e() { return 0; }
S opS(S a, S b) { return max(a,b); }
S opV(S s, V info) { return s; }
S opE(S s, E info) { return s + info.w; }

int main() {
  int n; cin >> n;
  RerootingDP<S, V, E, opS, opV, opE, e> r(n);
  for(int i=0; i<n-1; ++i) {
    int s,t,w; cin >> s >> t >> w;
    r.add_edge(s, t, E(w));
    r.add_edge(t, s, E(w));
  }

  r.solve();

  int ans = 0;
  for(int i=0; i<n; ++i) ans = max(ans, r.ans[i]);
  cout << ans << endl;
}
