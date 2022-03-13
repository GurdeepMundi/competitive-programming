#include <bits/stdc++.h>
using namespace std;

int main() {
  float p, total = 50;
  cin >> p;
  float a = p/100 * total, b = (100-p)/100 * total;
  cout << total/ a << endl;
  cout << total/ b << endl;
  return 0;
}