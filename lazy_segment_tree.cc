#include<bits/stdc++.h>
using namespace std;

#include"../lib/lazy_segment_tree.h"

/* Range Sum, Range Add */
struct S{ long long value; int size; };
using F = long long;
S op(S a, S b){ return {a.value+b.value, a.size+b.size}; }
S e(){ return {0, 0}; }
S mapping(F f, S x){ return {x.value + f*x.size, x.size}; }
F composition(F f, F g){ return f+g; }
F id(){ return 0; }

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_G
  int n, q;
  cin >> n >> q;
  
  vector<S> initial(n, {0,1});
  lazy_segment_tree<S, op, e, F, mapping, composition, id> st(initial);

  for(int i=0; i<q; i++) {
    int type;
    cin >> type;
    if(type==0) {
      int s, t, x;
      cin >> s >> t >> x;
      st.apply(s-1, t, F{x});
    }
    else {
      int s, t;
      cin >> s >> t;
      cout << st.product(s-1,t).value << endl;
    }
  }
}
