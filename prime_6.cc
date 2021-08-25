#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // https://atcoder.jp/contests/typical90/tasks/typical90_ad
  int n, k;
  cin >> n >> k;
  auto f = number_of_unique_prime_factors(n);
  int ans = 0;
  for(int x=2; x<=n; ++x) ans += f[x] >= k;
  cout << ans << endl;
}
