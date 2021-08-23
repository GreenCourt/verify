#include<bits/stdc++.h>
using namespace std;

#include"../lib/imos2d.h"

int main() {
  // https://atcoder.jp/contests/typical90/tasks/typical90_ab
  int n; cin >> n;
  vector<area> A(n);
  for(int i=0; i<n; ++i) {
    int lx,ly,rx,ry;
    cin >> lx >> ly >> rx >> ry;
    A[i] = {lx, ly, rx, ry};
  }
  auto imos = Imos2D(1000, 1000, A);
  vector<int> ans(n+1);
  for(int x = 0; x<=1000; ++x) for(int y = 0; y<=1000; ++y) ans[imos[x][y]]++;
  for(int i=1; i<=n; ++i) cout << ans[i] << '\n'; 
}
