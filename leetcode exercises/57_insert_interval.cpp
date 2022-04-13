#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> output;
    if(intervals.size() == 0) {
        output.push_back(newInterval);
        return output;
    }
    for(int i = 0; i < intervals.size(); i++) {
        if(newInterval.at(0) > intervals.at(i).at(1)) {
            output.push_back(intervals.at(i));
            if(i == intervals.size()-1)
            output.push_back(newInterval);
        }else if(newInterval.at(1) < intervals.at(i).at(0)) {
            output.push_back(newInterval);
            output.insert(output.end(), intervals.begin()+i, intervals.end());
            return output;
        }else if (newInterval.at(0) <= intervals.at(i).at(1)) {
            newInterval.at(0) = min(newInterval.at(0), intervals.at(i).at(0));
            newInterval.at(1) = max(newInterval.at(1), intervals.at(i).at(1));
            if(i == intervals.size()-1)
            output.push_back(newInterval);
        }
    }
    return output;
}

int main() {
  vector<vector<int>> output;
  vector<vector<int>> intervals = {{1,3}, {6,9}};
  vector<int> newInterval = {2,5};
  output = insert(intervals, newInterval);
  for(auto a: output) {
      cout << a.at(0) << '-';
      cout << a.at(1) << endl;
    }
  return 0;
}