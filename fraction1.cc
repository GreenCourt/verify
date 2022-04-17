#include<bits/stdc++.h>
using namespace std;

#include"../lib/fraction.h"

int main() {
  assert(Frac(0,2) + Frac(2,4) == Frac(1,2));
  assert(Frac(3,2) + Frac(2,3) == Frac(13,6));
  assert(Frac(2,6) - Frac(0,4) == Frac(1,3));
  assert(Frac(3,2) - Frac(2,3) == Frac(5,6));
  assert(Frac(0,2) * Frac(2,4) == Frac(0,1));
  assert(Frac(3,2) * Frac(8,6) == Frac(2,1));
  assert(Frac(3,2) * Frac(1,3) == Frac(1,2));
  assert(Frac(3,2) / Frac(6,4) == Frac(1,1));
  assert(Frac(4,7) / Frac(8,5) == Frac(5,14));
  assert(Frac(0,7) / Frac(8,5) == Frac(0,1));

  assert(Frac(0,2) + Frac(-2,4) == Frac(-1,2));
  assert(Frac(3,2) + Frac(-2,3) == Frac(5,6));
  assert(Frac(2,6) - Frac(-0,4) == Frac(1,3));
  assert(Frac(3,2) - Frac(-2,3) == Frac(13,6));
  assert(Frac(0,2) * Frac(-2,4) == Frac(-0,1));
  assert(Frac(3,2) * Frac(-8,6) == Frac(-2,1));
  assert(Frac(3,2) * Frac(-1,3) == Frac(-1,2));
  assert(Frac(3,2) / Frac(-6,4) == Frac(-1,1));
  assert(Frac(4,7) / Frac(-8,5) == Frac(-5,14));
  assert(Frac(0,7) / Frac(-8,5) == Frac(0,1));

  assert(Frac(-0,2) + Frac(2,4) == Frac(1,2));
  assert(Frac(-3,2) + Frac(2,3) == Frac(-5,6));
  assert(Frac(-2,6) - Frac(0,4) == Frac(-1,3));
  assert(Frac(-3,2) - Frac(2,3) == Frac(-13,6));
  assert(Frac(-0,2) * Frac(2,4) == Frac(0,1));
  assert(Frac(-3,2) * Frac(8,6) == Frac(-2,1));
  assert(Frac(-3,2) * Frac(1,3) == Frac(-1,2));
  assert(Frac(-3,2) / Frac(6,4) == Frac(-1,1));
  assert(Frac(-4,7) / Frac(8,5) == Frac(-5,14));
  assert(Frac(-0,7) / Frac(8,5) == Frac(0,1));

  cout << "ok" << endl;
}
