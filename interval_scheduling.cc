#include<bits/stdc++.h>
using namespace std;

#include"../lib/interval_scheduling.h"

int main() {
  // https://atcoder.jp/contests/typical-algorithm/tasks/typical_algorithm_b
  int n; cin >> n;
  vector<pair<long long,long long>> ba(n);
  for(int i=0; i<n; ++i) cin >> ba[i].second >> ba[i].first;
  cout << interval_scheduling(ba) << endl;
}
