#include<bits/stdc++.h>
using namespace std;

#include"../lib/lazy_segment_tree.h"

// https://atcoder.jp/contests/practice2/tasks/practice2_l

/* Range inversion number, Range Xor */
struct S{ int x[2]; long long rev; int size; };
using F = int;
S op(S a, S b){ return {a.x[0]+b.x[0], a.x[1]+b.x[1], (long long)a.x[1] * b.x[0] + a.rev + b.rev, a.size+b.size}; }
S e(){ return {0, 0, 0, 0}; }
S mapping(F f, S x){
  if(f) {
    long long comb_all = (long long)x.size * (x.size-1) / 2;
    long long comb_ones = (long long)x.x[0] * (x.x[0]-1) / 2;
    long long comb_zeros = (long long)x.x[1] * (x.x[1]-1) / 2;
    return {x.x[1], x.x[0], comb_all - comb_ones - comb_zeros - x.rev, x.size};
  }
  else {
    return  {x.x[0], x.x[1], x.rev, x.size};
  }
}
F composition(F f, F g){ return f ^ g; }
F id(){ return 0; }

int main() {
  int n, q;
  cin >> n >> q;
  vector<S> initial(n, {0,0,0,1});
  for(int i=0; i<n; ++i) {
    int a; cin >> a;
    initial[i].x[a] = 1;
  }

  lazy_segment_tree<S, op, e, F, mapping, composition, id> st(initial);

  for(int i=0; i<q; i++) {
    int type, l, r;
    cin >> type >> l >> r;
    if(type==1) {
      st.apply(l-1, r, 1);
    }
    else {
      cout << st.product(l-1,r).rev << endl;;
    }
  }
}
