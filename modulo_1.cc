#include<bits/stdc++.h>
using namespace std;

#include"../lib/modulo.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
  int m,n; cin >> m >> n;
  cout << modpow(m, n, 1000000007) << endl;
}
