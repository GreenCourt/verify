#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_C
  Point p1,p2,p3;
  cin >> p1 >> p2 >> p3;
  Circle c = circumscribed_circle(p1,p2,p3);
  cout << fixed << setprecision(12) << c.center.real() << " " << c.center.imag() << " " << c.r << endl;
}
