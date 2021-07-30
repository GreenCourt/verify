#include<bits/stdc++.h>
using namespace std;

#include"../lib/string_operation.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0063
  int ans = 0;
  string x;
  while(cin >> x) ans += is_palindrome(x);
  cout << ans << endl;
}
