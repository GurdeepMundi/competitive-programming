class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        unordered_map<int, int>::iterator it;
        vector<int> out(2,0);
        for(int i = 0; i < nums.size(); i++) {
            it = a.find(target-nums[i]);
            if(it != a.end()) {
                out[0] = it->second;
                out[1] = i;
            }else {
                a[nums[i]] = i;
            }
        }
        return out;
    }
};
