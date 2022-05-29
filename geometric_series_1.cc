#include<bits/stdc++.h>
using namespace std;

#include"../lib/geometric_series.h"

int main() {
  mt19937_64 rnd = mt19937_64(random_device()());

  for(int k=0; k<10000; ++k) {
    long long first = uniform_int_distribution<long long>(1, 20000)(rnd);
    long long diff = uniform_int_distribution<long long>(1, 10000)(rnd);
    long long n = uniform_int_distribution<long long>(1, 1000)(rnd);
    long long last = first + (n-1) * diff;
    long long ans = 0;
    for(int i=0; i<n; ++i) ans += first + i*diff;

    assert(ans == geometric_series_sum(first, last, n));
    assert(ans == geometric_series_sum2(first, diff, n));
    assert(ans == geometric_series_sum3(first, last, diff));
    assert(ans == geometric_series_sum4(last, diff, n));
  }
  cout << "OK" << endl;
}
