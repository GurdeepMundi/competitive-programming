/* A Binary search has been used here to reduce the memory usage and
perform the check in O(n log n) complexity*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true; 
        int start = 2, end = num/2;
        while(start <= end) {
            long long mid = (end + start) /2;
            if(mid*mid > num) {
                end = mid - 1;
            } else if(mid*mid < num) {
                start = mid+1;
            } else if(mid*mid == num) {
                return true;
            }
        }
        return false;
    }
};