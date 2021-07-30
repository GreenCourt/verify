#include<bits/stdc++.h>
using namespace std;

#include"../lib/segment_tree.h"

// https://atcoder.jp/contests/practice2/tasks/practice2_j
using S = int;
S op(S a, S b) { return max(a, b); }
S e() { return -1; }

int main() {
  int n,q; cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  segment_tree<S,op,e> st(a);
  while(q--) {
    int t; cin >> t;
    if(t==1) {
      int x,v; cin >> x >> v; x--;
      st.set(x,v);
    }
    else if(t==2) {
      int l,r; cin >> l >> r; l--;
      cout << st.product(l, r) << '\n';
    }
    else {
      int x,v; cin >> x >> v; x--;
      cout << st.max_right(x, [&](S p){ return p < v;}) + 1 << '\n';
    }
  }
}
