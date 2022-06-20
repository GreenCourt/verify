#include<bits/stdc++.h>
using namespace std;

#include"../lib/integer_math.h"

int main() {
  // https://atcoder.jp/contests/abc191/tasks/abc191_d
  double x,y,r; cin >> x >> y >> r;
  long long left  = llround(ceil(x-r));
  long long right = llround(floor(x+r));
  long long ans = 0;
  const int base = 10000;
  long long rr = llround(r*base) * llround(r*base);
  for(long long i=left; i<=right; i++) {
    double t = x-(double)i;
    long long tt = llround(t*base) * llround(t*base);
    long long p = isqrt(rr-tt);
    long long Y = llround(y*base);
    long long u = iceil(Y-p, base) / base;
    long long v = ifloor(Y+p, base) / base;
    ans += v - u + 1;
  }
  cout << ans << endl;
}
