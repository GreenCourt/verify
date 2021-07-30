#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_D
  Circle c;
  cin >> c.center >> c.r;
  int q; cin >> q;
  while(q--) {
    Line l; cin >> l[0] >> l[1];
    auto cp = cross_point(c,l);
    assert(!cp.empty());
    if(cp.size() == 1) cp.push_back(cp[0]);
    sort(cp.begin(), cp.end(), [&](const auto& a, const auto& b) {return coordinate_lt(a,b);});
    cout << fixed << setprecision(12) << cp[0].real() << " " << cp[0].imag() << " " << cp[1].real() << " " << cp[1].imag() << endl;
  }
}
