#include<bits/stdc++.h>
using namespace std;

#include"../lib/imos.h"

signed main() {
  // https://atcoder.jp/contests/abc014/tasks/abc014_3
  int n; cin >> n;
  vector<pair<int,int>> area(n);
  for(int i=0; i<n; ++i) {
    cin >> area[i].first >> area[i].second;
    ++area[i].second;
  }

  auto imos = Imos(1000000, area);
  cout << *max_element(imos.begin(), imos.end()) << endl;
}
