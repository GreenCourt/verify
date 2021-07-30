#include<bits/stdc++.h>
using namespace std;

#include"../lib/binary_search.h"

int main() {
  // https://atcoder.jp/contests/arc050/tasks/arc050_b
  long long r,b; cin >> r >> b;
  int x,y; cin >> x >> y;

  auto f = [&](long long k) {
    return r>=k && b>=k && ((r-k) / (x-1) + (b-k) / (y-1) >= k);
  };

  cout << BinarySearch(0, max(r,b)+1, f) << endl;
}
