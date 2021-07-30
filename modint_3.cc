#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // https://atcoder.jp/contests/abc172/tasks/abc172_e
  int n,m; cin >> n >> m;
  mod_combination mc(m);
  modint ans = mc.permutation(m,n) * mc.permutation(m,n);
  int sgn = 1;
  for(int i=1; i<=n; ++i) {
    ans -= mc.choose(n,i) * mc.permutation(m, i) * mc.permutation(m-i,n-i) * mc.permutation(m-i,n-i) * sgn;
    sgn*=-1;
  }
  cout << ans << endl;
}
