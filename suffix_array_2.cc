#include<bits/stdc++.h>
using namespace std;

#include"../lib/suffix_array.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_D
  string t; cin >> t;
  auto sa = SuffixArray(t);
  int n = t.size();
  int q; cin >> q;
  while(q--) {
    string p; cin >> p;
    cout << sa.contains(p) << '\n';
  }
}
