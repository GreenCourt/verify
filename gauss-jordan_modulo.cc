#include<bits/stdc++.h>
using namespace std;

#include"../lib/gauss-jordan_modulo.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1308
  int n,m,d;
  while(cin >> m >> n >> d, n) {
    vector s(n, vector<int>(m));
    for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) cin >> s[i][j];
    Matrix A(n*m, Vector(n*m));
    Vector b(n*m);
    for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) {
      int row = i*m + j;
      b[row] = 1 - s[i][j];
      for(int ii=0; ii<n; ++ii) for(int jj=0; jj<m; ++jj) {
        int col = ii*m + jj, dist = abs(i-ii) + abs(j-jj);
        if(dist == 0 or dist == d) A[row][col] = 1;
      }
    }
    auto [rank, sol] = linear_equations(A,b,2);
    cout << !(sol.empty()) << endl; 
  }
}
