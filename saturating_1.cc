#include<bits/stdc++.h>
using namespace std;

#include"../lib/saturating.h"

int main() {
  // https://atcoder.jp/contests/arc106/tasks/arc106_a
  long long n; cin >> n;
  for(int a=1; a<=37; a++) for(int b=1; b<=25; b++) {
    if(saturating_pow(3LL, a) + saturating_pow(5LL, b) == n){
      cout << a << " " << b << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
