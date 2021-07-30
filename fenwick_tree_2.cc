#include<bits/stdc++.h>
using namespace std;

#include"../lib/fenwick_tree.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  /* coordinate compression */
  vector<int> c(a);
  sort(c.begin(), c.end());
  for(int i=0; i<n; ++i) a[i] = lower_bound(c.begin(),c.end(),a[i]) - c.begin();

  /* inversion number */
  fenwick_tree ft(n);
  long long ans = 0;
  for(int i=0; i<n; ++i) {
    ft.add(a[i], 1);
    ans += ft.sum(a[i]+1,n);
  }
  cout << ans << endl;
}
