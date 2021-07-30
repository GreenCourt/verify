#include<bits/stdc++.h>
using namespace std;

#include"../lib/bits.h"

int main() {
  array<unsigned long long, 6> a{0, 1, 2, 22, 12345678910, 0xFFFFFFFFFFFFFFFF};
  for(auto i : a) {
    puts("");
    cout << bitset<numeric_limits<unsigned long long>::digits>(i) << endl;
    cout << bitset<numeric_limits<unsigned long long>::digits>(extract_lsb(i)) << "  (" << lsb_position(i)<< ")" << endl;
    cout << bitset<numeric_limits<unsigned long long>::digits>(extract_msb(i)) << "  (" << msb_position(i)<< ")" << endl;
  }
}
