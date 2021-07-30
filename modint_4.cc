#include<bits/stdc++.h>
using namespace std;

#include"../lib/modint.h"

int main() {
  // test mod_combination
  int n=1000;
  mod_combination mc(n);
  for( int i=1; i<=n; i++) for( int j=1; j<=i; j++) {
    if(i%100==0 && j==1) cerr << i << endl;
    modint c1 = mc.choose(i,j);
    modint c2 = choose(i,j);
    assert(c1==c2);
    modint p1 = mc.permutation(i,j);
    modint p2 = permutation(i,j);
    assert(p1==p2);
  }
}
