#include<bits/stdc++.h>
using namespace std;

#include"../lib/gauss-jordan_float.h"

int main() {
  // https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1328
  int d;
  while (cin >> d) {
    if(d==0) break;
    vector<double> v(d+3);
    for(auto&& i:v) cin >> i;
    Matrix mat(d+1, Vector(d+1));
    Vector vec(d+1);
    for(int skip1=0; skip1<d+3; ++skip1) for(int skip2=skip1+1; skip2<d+3; ++skip2) {
      int r = 0;
      for(int x=0; x<d+3; ++x) if(x!=skip1 && x!=skip2) {
        for(int c=0; c<=d; ++c) mat[r][c] = pow(x,c);
        vec[r++] = v[x];
      }
      auto g = linear_equations(mat, vec);
      double f1 = 0, f2 = 0;
      for(int i=0; i<=d; ++i) f1 += pow(skip1, i) * g[i], f2 += pow(skip2, i) * g[i];
      bool m1 = abs(f1-v[skip1]) < EPS, m2 = abs(f2-v[skip2]) < EPS;
      assert(!m1 || !m2);
      if(m1 == m2) continue;
      cout << (m1 ? skip2 : skip1) << endl;
      goto OUT;
    }
OUT:;
  }
}
