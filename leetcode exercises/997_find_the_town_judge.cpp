class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int totalTrustees = 0;
        vector<int> trustingPeople(n+1, -1); //-1 means trust no one
        int potentialJudge = 0;
        //filling the values for people who trust someone
        for(int i = 0; i < trust.size(); i++) {
            trustingPeople[trust[i][0]] = 1;
        }
        //checking who is potential judge. (doesn't trust anyone)
        for(int i = 1; i <= n; i++) {
            if(trustingPeople[i] == -1) potentialJudge = i;
        }
        //checking how many people trust potentialJudge
        for(auto a: trust) {
            if(a[1] == potentialJudge) totalTrustees++;
        }
        return (totalTrustees == n-1)? potentialJudge: -1;
    }
};