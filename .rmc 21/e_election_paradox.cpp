#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, temp;
  priority_queue<int> regions;
  long long wins = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> temp;
    regions.push(temp);
  }
  for(int i = 0; i < a; i++) {
    if(i < a/2) {
      wins += regions.top();
      regions.pop();
    } else {
      wins += regions.top()/2;
      regions.pop();
    }
  }
  cout << wins;
  return 0;
}