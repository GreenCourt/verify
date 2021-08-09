#include<bits/stdc++.h>
using namespace std;

#include"../lib/coordinate_compression_1d.h"

int main() {
  // https://atcoder.jp/contests/abc213/tasks/abc213_c
  int h,w,n; cin >> h >> w >> n;
  vector<int> row(n), col(n);
  for(int i=0; i<n; ++i) cin >> row[i] >> col[i];
  Compress1D crow(row);
  Compress1D ccol(col);
  for(int i=0; i<n; ++i) {
    int r = crow.compressed[i] + 1;
    int c = ccol.compressed[i] + 1;
    cout << r  << " " << c << '\n';
  }
}
