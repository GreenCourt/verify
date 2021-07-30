#include<bits/stdc++.h>
using namespace std;

#include"../lib/ext_gcd.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
  int a,b; cin >> a >> b;
  auto [_, x, y] = ext_gcd(a,b);
  cout << x << " " << y << endl; 
}
