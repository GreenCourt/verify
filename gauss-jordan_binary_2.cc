#include<bits/stdc++.h>
using namespace std;

#include"../lib/gauss-jordan_binary.h"

int main() {
  // https://atcoder.jp/contests/bitflyer2018-final-open/tasks/bitflyer2018_final_d
  int n; cin >> n; vector<long long> a(n), b(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];
  BitMatrix ma(n, 60), mb(n, 60);
  for(int r=0; r<n; r++) ma[r] = BitRow(a[r]), mb[r] = BitRow(b[r]);
  gauss_jordan(ma), gauss_jordan(mb);
  for(int r=0; r<n; r++) if(ma[r] != mb[r]) { puts("No"); return 0; }
  puts("Yes");
}
