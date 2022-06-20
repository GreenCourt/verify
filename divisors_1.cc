#include<bits/stdc++.h>
using namespace std;

#include"../lib/divisors.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D
  int a,b,c; cin >> a >> b >> c;
  int ans = 0;
  for(long long d : divisors(c)) if( a<=d && d<=b ) ans++;
  cout << ans << endl;
}
