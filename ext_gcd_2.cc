#include<bits/stdc++.h>
using namespace std;

#include"../lib/ext_gcd.h"

int main() {
  // https://atcoder.jp/contests/acl1/tasks/acl1_b
  long long n; cin >> n;
  const long long INF=2e18;
  long long ans = 2e18;
  auto f = [&] (long long d) {
    vector<long long> r(2), m(2);
    r[0] = 0, r[1] = -1, m[0] = d, m[1] = 2*n/d;
    auto [k, lcm] = crt(r,m);
    if(k && lcm) return k;
    else return INF;
  };
  for(long long i = 1; i * i <= 2*n; i++) if(2*n % i == 0) {
    ans = min(ans, f(i));
    ans = min(ans, f(2*n/i));
  }
  cout << ans << endl;
}
