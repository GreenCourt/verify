#include<bits/stdc++.h>
using namespace std;

#include"../lib/lazy_segment_tree.h"

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
// Although this problem can be solve by non-lazy segment tree,
// this code is to verify set() and get() method of lazy_segment_tree.
using S = int;
S op(S a, S b) { return a + b; }
S e() { return 0; }
using F = int;
S mapping(F f, S s){ return s; }
F composition(F f, F g){ return 0; }
F id(){ return 0; }

int main() {
  int n, q;
  cin >> n >> q;
  lazy_segment_tree<S, op, e, F, mapping, composition, id> st(n);

  for(int i=0; i<q; i++) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) st.set(x-1, st.get(x-1) + y);
    else cout << st.product(x-1, y) << endl;
  }
}
