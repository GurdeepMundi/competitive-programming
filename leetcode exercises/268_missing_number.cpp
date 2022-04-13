/* solution can be found efficiently using 
Sum of n numbers = (n * (n+1))/2 and finding the actual
sum of the array. Then subtract that sum from the sum of
n numbers to get the missing number.
*/

#include <iostream>
#include <vector>
#include <numeric> //accumulate
using namespace std;
int missingNumber(vector<int>& nums) {
    int arraySum = 0;
    //don't use accumulate, it takes more time
    for(auto a: nums) arraySum += a; 
    int actualSum = nums.size() * (nums.size()+1) /2;
    return actualSum - arraySum;
}

int main() {
  vector<int> nums = {0,1};
  cout << missingNumber(nums);
  return 0;
}