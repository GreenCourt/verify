#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // test mod_combination
  int n=1000;
  ModBinomial mb(n);
  for( int i=0; i<=n; i++) for( int j=0; j<=i; j++) {
    if(i%100==0 && j==i) cerr << i << endl;
    modint c1 = mb.choose(i,j);
    modint c2 = modint::choose(i,j);
    assert(c1==c2);
    modint p1 = mb.permutation(i,j);
    modint p2 = modint::permutation(i,j);
    assert(p1==p2);
  }
}
