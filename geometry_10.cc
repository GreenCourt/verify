#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_C
  int n; cin >> n;
  Polygon poly(n); for(auto &&i : poly) cin >> i;
  int q; cin >> q;
  while(q--) {
    Point p; cin >> p;
    cout << contains(poly, p) << endl;
  }
}
