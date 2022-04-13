#include <bits/stdc++.h>
using namespace std;
int a[100];
int mem[100]; // memoization
template <typename T>
// Insert Into Array n values from stdin.
void iia(T &a, int n) {
  for(int i=0; i<n; i++) cin>>a[i];
}

//longest increasing subsequence
int lis(int n) {
  if(mem[n] != -1) return mem[n];
  int longest = 1;
  for(int i=0; i<n; i++) {
    if(a[i] < a[n]) 
      longest = max(longest, 1+lis(i));
  }
  return mem[n] = longest;
}


int main() {
  int n;
  cin >> n;
  iia(a, n);
  memset(mem, -1, sizeof(mem));
  int output = 0;
  for(int i=0; i<n; i++) {
    output = max(output, lis(i));
  }
  cout << output;
  return 0;
}