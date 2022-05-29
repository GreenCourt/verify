#include<bits/stdc++.h>
using namespace std;

#include"../lib/random_test.h"
#include"../lib/geometric_series.h"

int main() {
  /* local test */
  for(int k=0; k<10000; ++k) {
    long long first = randint(1, 20000);
    long long diff = randint(1,10000);
    long long n = randint(1, 1000);
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
