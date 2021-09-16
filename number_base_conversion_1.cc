#include<bits/stdc++.h>
using namespace std;

#include"../lib/number_base_conversion.h"

int main() {
  // local test
  for(int b=2; b<=9+26; ++b) {
    int z = 12345;
    cout << b << " " << z << " " << from_decimal(z, b, false) << " " << from_decimal(z, b, true ) << endl;
    for(int x=0; x<= 100000; ++x) assert(to_decimal(from_decimal(x,b,false), b) == x);
    for(int x=0; x<= 100000; ++x) assert(to_decimal(from_decimal(x,b,true ), b) == x);
  }
}
