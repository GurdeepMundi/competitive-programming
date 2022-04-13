#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> heights;
vector<int> costs;

template <typename T>
// A function that can be used to insert n values
// into a vector from standard input
void insertIntoVector(vector<T> &myVect, int n) {
  for(int i=0; i<n; i++) {
    T temp;
    cin >> temp;
    myVect.push_back(temp);
  }
}

int minimum(int n) {
  int cost = INT_MAX;
  if(n == 0) return 0;
  if(n == 1) return abs(heights[1] - heights[0]);
  if(costs[n]!=-1) return costs[n];
  cost = min(cost, minimum(n-1) + abs(heights[n-1]-heights[n]));
  cost = min(cost, minimum(n-2) + abs(heights[n-2]-heights[n]));
  return costs[n] = cost;
}


int main() {
  #ifndef ONLINE_JUDGE
  freopen("./Templates/.input.txt", "r", stdin);
  freopen("./Templates/.output.txt", "w", stdout);
  #endif
  cin >> n;
  for(int i=0; i<n; i++) costs.push_back(-1);
  insertIntoVector(heights, n);
  cout << minimum(n-1);
  return 0;
}