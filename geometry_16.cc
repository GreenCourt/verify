#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_F
  Point p; cin >> p;
  Circle c; cin >> c.center >> c.r;
  auto t = tangent(c,p);
  assert(t.size() == 2);
  sort(t.begin(), t.end(), [&](const auto& a, const auto& b) {return coordinate_lt(a,b);});
  cout << fixed << setprecision(12) << t[0].real() << " " << t[0].imag() << " " << t[1].real() << " " << t[1].imag() << endl;
}
