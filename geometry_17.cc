#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_G
  Circle c1,c2; cin >> c1.center >> c1.r >> c2.center >> c2.r;
  auto t = tangent(c1,c2);
  vector<Point> cp;
  for(auto i : t) {
    auto p = cross_point(c1,i);
    cp.insert(cp.end(), p.begin(), p.end());
  }
  sort(cp.begin(), cp.end(), [&](const auto& a, const auto& b) {return coordinate_lt(a,b);});
  for(auto i:cp) cout << fixed << setprecision(12) << i.real() << " " << i.imag() << endl;
}
