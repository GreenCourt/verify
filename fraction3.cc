#include<bits/stdc++.h>
using namespace std;

#include"../lib/fraction.h"

int main() {
  // https://atcoder.jp/contests/abc248/tasks/abc248_e
  int n,k; cin >> n >> k;
  vector<int> x(n), y(n);
  for(int i=0; i<n; ++i) cin >> x[i]>> y[i];
  if(k==1) { puts("Infinity"); return 0; }

  map<tuple<long long,long long,long long>, int> mp;
  for(int i=0; i<n; ++i) for(int j=i+1; j<n; ++j) mp[FracLine(x[i],y[i],x[j],y[j]).to_tuple()]++;

  long long r = k*(k-1) / 2;
  long long ans = 0;
  for(auto [f, count] : mp) if(count >= r) ans += 1;
  cout << ans << '\n';
}
