/* The algorithm used here is that, if we start at some point, and if we cannot reach
a certain station (i+1), this means that we cannot reach at (i+1) from any station in
between the starting point and i, so we start looking from i+1*/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int extraFuel = 0;
        int overallExtraFuel = 0;
        for (int i = 0; i < gas.size(); i++) {
            overallExtraFuel += gas[i] - cost[i];
            extraFuel += gas[i] - cost[i];
            if(extraFuel < 0) {
                extraFuel = 0;
                start = i+1; //cannot reach i+1 from any point starting from start
            }
        }
        //check if cost is more than the fuel
        return (overallExtraFuel < 0)? -1: start;
    }
};