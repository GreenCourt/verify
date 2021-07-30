#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_H
  Circle c;
  int n;
  cin >> n >> c.r;
  Polygon poly(n);
  for(auto&& i: poly) cin >> i;
  cout << fixed << setprecision(12) << intersection_area(c, poly) << endl;
}
