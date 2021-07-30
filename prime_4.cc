#include<bits/stdc++.h>
using namespace std;

#include"../lib/prime.h"

int main() {
  // https://atcoder.jp/contests/abc149/tasks/abc149_c
  int x;
  cin>>x;

  int p=x;
  while(!is_prime(p)) p++;

  cout << p << endl;
}
