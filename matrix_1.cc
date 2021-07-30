#include<bits/stdc++.h>
using namespace std;

#include"../lib/matrix.h"

int main() {
  // https://atcoder.jp/contests/dp/tasks/dp_r
  int N; long long K;
  cin >> N >> K;
  Matrix a(N, Vector(N));
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) cin >> a[i][j];

  auto ak = matpow(a, K, 1000000007);
  int ans = 0;
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) ans = (ans + ak[i][j]) % 1000000007;
  cout << ans << endl;
}
