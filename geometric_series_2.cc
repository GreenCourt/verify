#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometric_series.h"

int main() {
  long long n,a,b; cin >> n >> a >> b;
  long long ans = n * (n+1) / 2;
  long long L = lcm(a,b);
  ans -= geometric_series_sum3(a, n-n%a, a);
  ans -= geometric_series_sum3(b, n-n%b, b);
  ans += geometric_series_sum3(L, n-n%L, L);
  cout << ans << '\n';
}
