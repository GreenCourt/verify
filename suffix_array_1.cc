#include<bits/stdc++.h>
using namespace std;

#include"../lib/suffix_array.h"

int main() {
  //https://atcoder.jp/contests/practice2/tasks/practice2_i
  string s; cin >> s;
  auto sa = SuffixArray(s);
  auto lcp = longest_common_prefix_array(sa);
  long long n = s.size();
  long long ans = n * (n+1) / 2;
  for(int l : lcp) ans -= l;
  cout << ans << endl;
}
