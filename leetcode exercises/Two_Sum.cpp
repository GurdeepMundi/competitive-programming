class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector <int> out;
        for (int i=0; i< size-1; i++) {
            for(int j= i+1; j < size; j++) {
                if(nums.at(i) + nums.at(j) == target) { 
                out.push_back(i);
                out.push_back(j);
                }
            }
        }
          return out;  
        }
};
