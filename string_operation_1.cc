#include<bits/stdc++.h>
using namespace std;

#include"../lib/string_operation.h"

int main() {
  string s = "12:34:56";
  cout << remove_char(s ,':') << endl;
  for(auto i : split(s,':')) cout << i << endl;
  for(auto i : split(s,':',true)) cout << i << endl;
  string s2(s);
  replace(s2.begin(), s2.end(), ':', '#');
  cout << s2 << endl;
}
