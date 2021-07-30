#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_I
  Circle c1,c2;
  cin >> c1.center >> c1.r >> c2.center >> c2.r;
  cout << fixed << setprecision(12) << intersection_area(c1, c2) << endl;
}
