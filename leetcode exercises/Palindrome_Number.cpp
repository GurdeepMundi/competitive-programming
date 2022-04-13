#include <math.h>
class Solution {
public:
    bool isPalindrome(int x) {
    if(pow(-2, 31) <= x <= (pow(2, 31) - 1)) {    
       long buffer = (long) x;
        long backwardString = 0;
        for(int i = 0; buffer != 0; i++) {
        backwardString = backwardString * ((i != 0)? 10: 0);
        backwardString += abs(buffer % 10);
        buffer /= 10;
        }
        if(backwardString == (long)x)
            return true;
            return false;
    } else {
        throw 99;
    }
    }
};
