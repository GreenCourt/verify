#include<bits/stdc++.h>
using namespace std;

#include"../lib/matrix.h"

int main() {
  // http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D
  int n, m, l;
  cin >> n >> m >> l;
  Matrix A(n, Vector(m));
  Matrix B(m, Vector(l));

  for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> A[i][j];
  for(int i=0; i<m; i++) for(int j=0; j<l; j++) cin >> B[i][j];

  auto C = matmul(A,B);

  for(int i=0; i<n; i++) for(int j=0; j<l; j++) 
    printf("%lld%s", C[i][j], j==l-1 ? "\n" : " ");
}
