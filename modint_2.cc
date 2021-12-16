#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // https://atcoder.jp/contests/abc021/tasks/abc021_d
  int n,k; cin >> n >> k;
  n = n+k-1; /* allow duplicates */
  cout << modint::choose(n,k) << endl; 
}
