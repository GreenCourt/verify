#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0009
  const int n_max = 999999;
  sieve s(n_max);
  vector<int> csum(n_max, 0);
  for(int i=2; i<=n_max; i++)
    csum[i] = csum[i-1] + (s.is_prime(i) ? 1 : 0);

  int n;
  while(cin >> n) cout << csum[n] << endl;
}
