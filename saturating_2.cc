#include<bits/stdc++.h>
using namespace std;

#include"../lib/saturating.h"

int main() {
  // https://atcoder.jp/contests/abc169/tasks/abc169_b
  int n; cin >> n;
  long long ans = 1;
  for(int i=0; i<n; i++) {
    long long a; cin >> a;
    ans = saturating_mul(ans, a);
  }
  if(ans > (long long)1e18) cout << -1 << endl;
  else cout << ans << endl;
}
