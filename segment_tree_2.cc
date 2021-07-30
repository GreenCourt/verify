#include<bits/stdc++.h>
using namespace std;

#include"../lib/segment_tree.h"

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
using S = int;
S op(S a, S b) { return a + b; }
S e() { return 0; }

int main() {
  int n, q;
  cin >> n >> q;
  segment_tree<S, op, e> st(n);

  for(int i=0; i<q; i++) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) st.set(x-1, st.get(x-1) + y);
    else cout << st.product(x-1, y) << endl;
  }
}
