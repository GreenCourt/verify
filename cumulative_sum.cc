#include<bits/stdc++.h>
using namespace std;

#include"../lib/cumulative_sum.h"

int main() {
  // https://atcoder.jp/contests/abc122/tasks/abc122_c
  int n,q; cin >> n >> q;
  string s; cin >> s;
  vector<bool> ac(n);
  for(int i=0; i<n-1; ++i) ac[i] = s[i] == 'A' && s[i+1] == 'C';
  CumulativeSum cs(ac);
  while(q--) {
    int l,r; cin >> l >> r; --l, --r;
    cout << cs.query(l,r) << endl;
  }
}
