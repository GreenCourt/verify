#include<bits/stdc++.h>
using namespace std;

#include"../lib/zobrist_hash_set.h"

int main() {
  // https://atcoder.jp/contests/abc250/tasks/abc250_e
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];

  vector<uint64_t> ha(n), hb(n);
  ZobristHashSet<int> za, zb;

  for(int i=0; i<n; ++i) {
    za.insert(a[i]);
    zb.insert(b[i]);
    ha[i] = za.hash;
    hb[i] = zb.hash;
  }

  int q; cin >> q;
  while(q--) {
    int x,y; cin >> x >> y; --x, --y;
    cout << (ha[x] == hb[y] ? "Yes\n" : "No\n");
  }
}
