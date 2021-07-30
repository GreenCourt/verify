#include<bits/stdc++.h>
using namespace std;

#include"../lib/cumulative_sum_2D.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0560
  int n,m,k; cin >> m >> n >> k;
  vector<string> grid(m);
  for(int i=0; i<m; ++i) cin >> grid[i];

  CumulativeSum2D J(grid, 'J');
  CumulativeSum2D O(grid, 'O');
  CumulativeSum2D I(grid, 'I');

  for(int i=0; i<k; ++i) {
    int x1,y1,x2,y2; cin >> y1 >> x1 >> y2 >> x2;
    --x1, --y1;
    cout << J.query(y1,x1,y2,x2) << " ";
    cout << O.query(y1,x1,y2,x2) << " ";
    cout << I.query(y1,x1,y2,x2) << endl;
  }
}
