#include<bits/stdc++.h>
using namespace std;

#include"../lib/cumulative_sum_2D.h"

int main() {
  // https://atcoder.jp/contests/abc005/tasks/abc005_4
  int n; cin >> n;
  vector<vector<int>> grid(n, vector<int>(n, 0));
  for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) cin >> grid[i][j];
  CumulativeSum2D cs(grid);

  vector<int> ans(n*n+1);
  for(int y1=0; y1<n; ++y1) for(int x1=0; x1<n; ++x1) for(int y2=y1+1; y2<=n; ++y2) for(int x2=x1+1; x2<=n; ++x2) {
    int w = x2 - x1, h = y2 - y1;
    ans[w*h] = max(ans[w*h], (int)cs.query(y1,x1,y2,x2));
  }
  for(int i=1; i<= n*n; ++i) ans[i] = max(ans[i], ans[i-1]);

  int q; cin >> q;
  while(q--) {
    int p; cin >> p;
    cout << ans[p] << endl;
  }
}
