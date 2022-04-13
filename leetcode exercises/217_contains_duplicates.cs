// this solution is in c#
using System.Collections.Generic;
public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        Dictionary<int, bool> occassions = new Dictionary<int, bool>(); 
        for(int i = 0; i < nums.Length; i++) {
            if(occassions.ContainsKey(nums[i])) {
                return true;
            } else {
                occassions.Add(nums[i], false);
            }   
        }
        return false;
    }
}