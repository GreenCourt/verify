#include<bits/stdc++.h>
using namespace std;

#include"../lib/fill.h"

int main() {
  {
    // one-dimensional array
    const int n = 10;
    int a[n];
    int val = 2; 
    FILL(a, val);
    for(int i=0; i<n; ++i) assert(a[i] == val);
  }
  {
    // two-dimensional array
    const int n = 10, m = 20;
    int a[n][m];
    int val = 5; 
    FILL(a, val);
    for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) assert(a[i][j] == val);
  }
  {
    // three-dimensional array
    const int x = 20, y = 50, z = 30;
    int a[x][y][z];
    int val = 6;
    FILL(a, val);
    for(int i=0; i<x; ++i) for(int j=0; j<y; ++j) for(int k=0; k<z; ++k) assert(a[i][j][k] == val);
  }
  {
    // one-dimensional vector
    const int n = 40;
    vector<int> a(n, -1);
    int val = 3;
    FILL(a, val);
    for(auto i:a) assert(i == val);
  }
  {
    // two-dimensional vector
    const int n = 20, m = 30;
    vector a(n, vector(m, -1));
    int val = 4;
    FILL(a, val);
    for(auto &i:a) for(auto j:i) assert(j == val);
  }
  {
    // three-dimensional vector
    const int x = 20, y = 30, z = 60;
    vector a(x, vector(y, vector(z, -1)));
    int val = 8;
    FILL(a, val);
    for(auto &i:a) for(auto &j:i) for(auto k:j) assert(k == val);
  }
  puts("pass");
}
