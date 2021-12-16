#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // https://atcoder.jp/contests/abc172/tasks/abc172_e
  int n,m; cin >> n >> m;
  ModBinomial mb(m);
  modint ans = mb.permutation(m,n) * mb.permutation(m,n);
  int sgn = 1;
  for(int i=1; i<=n; ++i) {
    ans -= mb.choose(n,i) * mb.permutation(m, i) * mb.permutation(m-i,n-i) * mb.permutation(m-i,n-i) * sgn;
    sgn*=-1;
  }
  cout << ans << endl;
}
