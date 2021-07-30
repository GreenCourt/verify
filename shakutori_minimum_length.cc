#include<bits/stdc++.h>
using namespace std;

#include"../lib/shakutori_minimum_length.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_A
  int n,s; cin >> n >> s;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  int l = shakutori_minimum_length(a, s);
  cout << (l==n+1 ? 0 : l) << endl;
}
