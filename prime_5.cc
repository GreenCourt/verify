#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // https://atcoder.jp/contests/abc169/tasks/abc169_d
  long long N;
  cin >> N;
  sieve s(ceil(sqrt(N)));
  auto factors = s.factors(N);

  int ans = 0;
  for(auto f : factors) {
    int count = f.second;
    int now = 1;
    while(count >= now) {
      ans++;
      count -= now;
      now++;
    }
  }
  cout << ans << endl;
}
