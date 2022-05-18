#include<bits/stdc++.h>
using namespace std;

#include"../lib/lazy_segment_tree.h"

// https://atcoder.jp/contests/practice2/tasks/practice2_j
// Although this problem can be solve by non-lazy segment tree,
// this code is to verify min_left() method of lazy_segment_tree.
using S = int;
S op(S a, S b) { return max(a, b); }
S e() { return -1; }
using F = int;
S mapping(F f, S s){ return s; }
F composition(F f, F g){ return 0; }
F id(){ return 0; }

int main() {
  int n,q; cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  reverse(a.begin(), a.end());

  lazy_segment_tree<S, op, e, F, mapping, composition, id> st(a);
  while(q--) {
    int t; cin >> t;
    if(t==1) {
      int x,v; cin >> x >> v;
      x = n - x;
      st.set(x,v);
    }
    else if(t==2) {
      int l,r; cin >> l >> r;
      l = n - l + 1;
      r = n - r;
      swap(l,r);
      cout << st.product(l, r) << '\n';
    }
    else {
      int x,v; cin >> x >> v;
      x = n - x + 1;
      cout << n - st.min_left(x, [&](S p){ return p < v;}) + 1<< '\n';
    }
  }
}
