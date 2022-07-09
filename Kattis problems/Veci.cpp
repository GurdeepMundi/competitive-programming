#include <bits/stdc++.h>
using namespace std;

template <typename T>
// Insert Into Array n values from stdin.
void iia(T &a, int n) {
  for(int i=0; i<n; i++) cin>>a[i];
}


int main() {
  int a;
  cin >> a;
  vector<int> testArray;
  while(a>0) {
    testArray.push_back(a%10);
    a /= 10;
  }
  reverse(testArray.begin(),testArray.end());
  if(next_permutation(testArray.begin(),testArray.end())) {
    for(auto num: testArray) cout << num;
  }else {
    cout << 0;
  }
  return 0;
}