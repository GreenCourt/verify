#include<bits/stdc++.h>
using namespace std;

#include"../lib/fraction.h"

int main() {
  // https://atcoder.jp/contests/abc225/tasks/abc225_e
  int n; cin >> n;
  vector<pair<FracVector, FracVector>> rl(n);
  for(int i=0; i<n; ++i) {
    int x,y; cin >> x >> y;
    rl[i] = {FracVector(x-1,y), FracVector(x,y-1)};
  }
  sort(rl.begin(), rl.end());
  int ans = 0;
  FracVector b;
  for(auto [r,l] : rl) if(l >= b) ans++, b=r;
  cout << ans << endl;
}
