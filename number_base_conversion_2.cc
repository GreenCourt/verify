#include<bits/stdc++.h>
using namespace std;

#include"../lib/number_base_conversion.h"

int main() {
  // https://atcoder.jp/contests/typical90/tasks/typical90_bo
  string n; int k; cin >> n >> k; 
  while(k--) {
    long long d = to_decimal(n, 8);
    n = from_decimal(d, 9);
    for(int i=0; i<n.size(); ++i) if(n[i] == '8') n[i] = '5';
  }
  cout << n << endl;
}
