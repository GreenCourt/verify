#include<bits/stdc++.h>
using namespace std;

#include"../lib/modulo.h"

int main() {
  // https://atcoder.jp/contests/abc021/tasks/abc021_d
  int n,k; cin >> n >> k;
  n = n+k-1; /* allow duplicates */
  cout << choose(n, k, 1000000007) << endl; 
}
