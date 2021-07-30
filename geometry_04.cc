#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A
  int q; cin >> q;
  while(q--) {
    Point p0,p1,p2,p3; cin >> p0 >> p1 >> p2 >> p3;
    Line s1(p0,p1), s2(p2,p3);
    if(is_parallel(s1, s2)) puts("2");
    else if(is_orthogobal(s1, s2)) puts("1");
    else puts("0");
  }
}
