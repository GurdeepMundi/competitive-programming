#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int k;
int h[N];
int dp[N];

int func(int i) {
	if(i==0) return 0;
	if(dp[i] != -1) return dp[i];
	int cost = INT_MAX;
	for(int j = 1; j <= k; ++j) {
		if(i - j >= 0)
			cost = min(cost, func(i-j) + abs(h[i] - h[i-j]));
	}
	return dp[i] = cost;
}

int main() {
	int n;
	cin >> n >> k;
	memset(dp, -1, sizeof(dp));
	for(int i=0; i<n; i++) {
		cin >> h[i];
	}
	cout << func(n-1);
}