#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_C
  int q; cin >> q;
  while(q--) {
    Point p0,p1,p2,p3; cin >> p0 >> p1 >> p2 >> p3;
    Segment s1(p0,p1), s2(p2,p3);
    Point is = cross_point(s1,s2);
    cout << fixed << setprecision(10) << is.real() << " " << is.imag() << endl;
  }
}
