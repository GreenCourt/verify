#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_A
  Circle c1,c2;
  cin >> c1.center >> c1.r;
  cin >> c2.center >> c2.r;
  cout << number_of_common_tangents(c1,c2) << endl;
}
