#include<bits/stdc++.h>
using namespace std;

#include"../lib/doubling.h"

int main() {
  // https://atcoder.jp/contests/typical90/tasks/typical90_bf
  int n; long long k; cin >> n >> k;
  constexpr int MOD = 100000;
  vector<int> z(MOD);
  for(int x=0; x<MOD; ++x) {
    int y = 0;
    for(int X=x; X; X/=10) y += X%10;
    z[x] = (x+y) % MOD;
  }
  Doubling dbl(z,k);
  cout << dbl.query(n,k) << endl;
}
