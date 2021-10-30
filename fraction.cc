#include<bits/stdc++.h>
using namespace std;

#include"../lib/fraction.h"

int main() {
  // https://atcoder.jp/contests/abc225/tasks/abc225_e
  int n; cin >> n;
  vector<pair<Frac, Frac>> rl(n);
  for(int i=0; i<n; ++i) {
    int x,y; cin >> x >> y;
    rl[i] = {Frac(y, x-1), Frac(y-1,x)};
  }
  sort(rl.begin(), rl.end());
  int ans = 0;
  Frac b(0);
  for(auto [r,l] : rl) if(l >= b) ans++, b=r;
  cout << ans << endl;
}
