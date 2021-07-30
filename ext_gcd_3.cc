#include<bits/stdc++.h>
using namespace std;

#include"../lib/ext_gcd.h"

int main() {
  // https://atcoder.jp/contests/abc193/tasks/abc193_e
  int T; cin >> T;
  while(T--) {
    int x,y,p,q; cin >> x >> y >> p >> q;
    const long long INF = 2e18;
    long long ans = INF;
    for(int a=x; a<x+y; ++a) for(int b=p; b<p+q; ++b) {
      // t = a mod (2x+2y)
      // t = b mod (p+q)
      vector<long long> r(2),m(2);
      r[0] = a, r[1] = b, m[0] = 2*(x+y), m[1] = p+q;
      auto [t,lcm] = crt(r,m);
      if(lcm) ans = min(ans,t);
    }
    if (ans == INF) cout << "infinity" << endl;
    else cout << ans << endl;
  }
}
