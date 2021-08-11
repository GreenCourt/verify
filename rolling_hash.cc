#include<bits/stdc++.h>
using namespace std;

#include"../lib/rolling_hash.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
  string t,p; cin >> t >> p;
  for(int i : find_all_matches_by_rolling_hash(t,p)) cout << i << '\n';
}
