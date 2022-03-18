class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream str(s);
        string last;
        while(str >> last);
        return last.length();
    }
};