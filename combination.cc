#include<bits/stdc++.h>
using namespace std;

#include"../lib/combination.h"

long long choose(int n, int k) {
  /* O(k) */
  long long ret = 1;
  for(long long i = 1; i <= k; ++i) ret = (ret * n--) / i;
  return ret;
}

int main() {
  int n=60;
  combination c(n);
  for(int i=1; i<=n; i++) for(int j=1; j<=i; j++)
    assert(c.choose(i,j) == choose(i,j));
}
