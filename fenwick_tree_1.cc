#include<bits/stdc++.h>
using namespace std;

#include"../lib/fenwick_tree.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
  int n,q; cin >> n >> q;  
  fenwick_tree ft(n);
  while(q--) {
    int com, x, y; cin >> com >> x >> y;
    if(com) cout << ft.sum(x-1,y) << endl;
    else ft.add(x-1, y);
  }
}
