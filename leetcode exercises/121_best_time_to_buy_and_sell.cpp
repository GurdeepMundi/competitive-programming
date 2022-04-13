#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
   if(prices.size() == 1) return 0; //edge case
   int maxProf = 0, leastPrice = INT_MAX;
   int pist = 0; //profit if sold today
   for(int i = 0; i < prices.size(); i++) {
      if(prices[i] < leastPrice) leastPrice = prices[i];
      pist = prices[i] - leastPrice;
      if(pist > maxProf) maxProf = pist;
   }
   return maxProf;
}

int main() {
   vector<int> a = {1,2};
   cout << maxProfit(a);
   return 0;
}