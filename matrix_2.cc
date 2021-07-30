#include<bits/stdc++.h>
using namespace std;

#include"../lib/matrix.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D
  int n,m;
  cin >> n >> m;
  Matrix A(n, Vector(m));
  Vector b(m);
  for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> A[i][j];
  for(int i=0; i<m; i++) cin >> b[i];
  auto C = matmul(A, b);
  for(int i=0; i<n; i++) printf("%lld\n", C[i]);
}
