#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A
  int n; cin >> n;
  Polygon p(n); for(auto&& i : p) cin >> i;
  printf("%.1lf\n", abs(signed_area(p)));
}
