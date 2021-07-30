#include<bits/stdc++.h>
using namespace std;

#include"../lib/shakutori_count.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_C
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  while(q--) {
    long long x; cin >> x;
    cout << shakutori_count(a, x) << endl;
  }
}
