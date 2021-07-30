#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_D
  int q; cin >> q;
  while(q--) {
    Point p0,p1,p2,p3; cin >> p0 >> p1 >> p2 >> p3;
    Segment s1(p0,p1), s2(p2,p3);
    cout << fixed << setprecision(10) << distance(s1,s2) << endl;
  }
}
