#include<bits/stdc++.h>
using namespace std;

#include"../lib/divisors.h"

int main() {
  // https://atcoder.jp/contests/arc108/tasks/arc108_a
  long long s,p; cin >> s >> p;
  auto d = divisors(p);
  for(auto n:d) {
    long long  m = p / n;
    if(m + n == s) { puts("Yes"); return 0; }
  }
  puts("No");
}
