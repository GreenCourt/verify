#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_A
  Point p1,p2; cin >> p1 >> p2;
  Line p1p2(p2, p1);
  int q; cin >> q;
  while(q--) {
    Point p; cin >> p;
    Point ans = projection(p1p2, p);
    cout << fixed << setprecision(10) << ans.real() << " " << ans.imag() << endl;
  }
}
