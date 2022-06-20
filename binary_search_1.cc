#include<bits/stdc++.h>
using namespace std;

#include"../lib/binary_search.h"

int main() {
  // https://atcoder.jp/contests/abc174/tasks/abc174_e
  int n,k; cin >> n >>k;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  auto f = [&](long long x) {
    if(x==0) return false;
    long long kk = k;
    for(int i=0; i<n; ++i) kk -= (a[i] + x-1) / x - 1;
    return kk >= 0;
  };

  cout << BinarySearch(0, *max_element(a.begin(),a.end()), f) << endl;
}
