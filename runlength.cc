#include<bits/stdc++.h>
using namespace std;

#include"../lib/runlength.h"

int main() {
  // https://atcoder.jp/contests/abc019/tasks/abc019_2
  string s; cin >> s;
  auto r = runlength(s);
  for(auto [a,b] : r) cout << a << b;
  cout << endl;
}
