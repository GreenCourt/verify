#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C
  Point p0,p1; cin >> p0 >> p1;
  int q; cin >> q;
  while(q--) {
    Point p2; cin >> p2;
    switch(ccw(p0, p1, p2)) {
      case 1:
        puts("COUNTER_CLOCKWISE");
        break; 
      case -1:
        puts("CLOCKWISE");
        break; 
      case 2:
        puts("ONLINE_BACK");
        break; 
      case -2:
        puts("ONLINE_FRONT");
        break; 
      default:
        puts("ON_SEGMENT");
    }
  }
}
