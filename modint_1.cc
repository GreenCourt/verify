#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // https://atcoder.jp/contests/abc156/tasks/abc156_d
  int n,a,b;
  cin >> n >> a >> b;
  cout << modint(2).pow(n) - 1 - modint::choose(n,a) - modint::choose(n,b) << endl;
}
