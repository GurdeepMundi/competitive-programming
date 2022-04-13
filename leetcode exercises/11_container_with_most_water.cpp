#include <iostream>
#include <algorithm> // min and max
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maximumArea = 0;
    int left = 0, right = height.size() - 1; // will be used to point at lines 
    //starting from fathest
    while (left < right) {
      maximumArea = max(maximumArea,(right - left) * min(height.at(left), height.at(right)));
      if(height.at(left) > height.at(right)) {
        right--;
      } else if(height.at(left) < height.at(right)) {
        left++;
      }else {
        (height.at(left + 1) < height.at(right-1))?right--: left++;
      }
    }
    return maximumArea;
}

int main() {
  vector<int> height = {1,8,6,2,5,4,8,3,7};
  cout << maxArea(height);
  return 0;
}