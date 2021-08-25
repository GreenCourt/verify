#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  /* local test */
  int n = 10000000;
  sieve s(n);
  auto a = number_of_unique_prime_factors(n);
  auto b = number_of_prime_factors(n);
  for(int x=2; x<=n; ++x) {
    auto f =s.factors(x) ;
    assert(f.size() == a[x]);
    int r = 0;
    for(auto [v,c] : f) r += c;
    assert(r == b[x]);
  }
  cout << "done" << endl;
}
