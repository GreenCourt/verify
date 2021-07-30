#include<bits/stdc++.h>
using namespace std;

#include"../lib/modulo.h"

int main() {
  // https://atcoder.jp/contests/abc034/tasks/abc034_c
  int h,w; cin >> h >> w;
  cout << choose(h+w-2, h-1, 1000000007) << endl;
}
