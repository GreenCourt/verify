#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
  int n;
  cin >> n;
  cout << n << ":";
  sieve s(ceil(sqrt(n)));
  auto factors = s.factors(n);
  for(auto f : factors) for(int i=0; i<f.second; i++) cout << " " << f.first;
  cout << endl;
}
