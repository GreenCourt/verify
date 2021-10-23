#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_D
  long long n; cin >> n;
  cout << euler_phi(n) << endl;
}
