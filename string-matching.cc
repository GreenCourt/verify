#include<bits/stdc++.h>
using namespace std;

#include"../lib/string-matching.h"

signed main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
  string T, P;
  cin >> T >> P;
  StringMatching<string> sm(P);
  for(auto start : sm.findAll(T)) cout << start << endl;
}
