#include<bits/stdc++.h>
using namespace std;

#include"../lib/next_combination.h"

int main() {
  // https://atcoder.jp/contests/abc018/tasks/abc018_4
  int n,m,p,q,r; cin >> n >> m >> p >> q >> r;
  vector<vector<pair<int,int>>> xz(m);
  for(int i=0; i<r; ++i) {
    int x,y,z; cin >> x >> y >> z; --x,--y;
    xz[y].emplace_back(x,z);
  }
  int ans = 0;
  Combinations comb(n,p);
  do {
    vector happiness(m,0);
    vector girl(n,false);
    for(int i : comb.current) girl[i] = true;
    for(int y=0; y<m; ++y) for(auto [x,z] : xz[y]) if(girl[x]) happiness[y] += z;
    sort(happiness.begin(), happiness.end(), greater{});
    ans = max(ans, accumulate(happiness.begin(), happiness.begin()+q, 0));
  } while(comb.next());
  cout << ans << endl;
}
