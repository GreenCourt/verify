#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometry.h"

int main() {
  Point center(0,0);
  Circle c(center, 1);
  Point edge1(1,0);
  Point edge2(0,1);
  Point out1(1,3);
  Point out2(2,2);
  Point out3(-2,-2);
  Point in1(0.5,0.5);
  Point in2(0.2,0.8);
  assert(intersect(c, Segment(in1, in2)) == 0);
  assert(intersect(c, Segment(out1, out2)) == 0);
  assert(intersect(c, Segment(out2, out3)) == 2);
  assert(intersect(c, Segment(edge1, edge2)) == 2);
  assert(intersect(c, Segment(in1, edge1)) == 1);
  assert(intersect(c, Segment(in1, edge2)) == 1);
  assert(intersect(c, Segment(in2, edge1)) == 1);
  assert(intersect(c, Segment(in2, edge2)) == 1);
  assert(intersect(c, Segment(in1, out1)) == 1);
  assert(intersect(c, Segment(in1, out2)) == 1);
  assert(intersect(c, Segment(in1, out3)) == 1);
  assert(intersect(c, Segment(in2, out1)) == 1);
  assert(intersect(c, Segment(in2, out2)) == 1);
  assert(intersect(c, Segment(in2, out3)) == 1);
  assert(intersect(c, Segment(edge1, out1)) == 1);
  assert(intersect(c, Segment(edge1, out2)) == 1);
  assert(intersect(c, Segment(edge1, out3)) == 2);
  assert(intersect(c, Segment(edge2, out1)) == 1);
  assert(intersect(c, Segment(edge2, out2)) == 1);
  assert(intersect(c, Segment(edge2, out3)) == 2);
}
