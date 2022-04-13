class Solution {
public:
    int romanToInt(string s) {
        int output = 0;
        int a[255];
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
        //handling special cases
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'I') {
                if(s[i+1] == 'V') {
                    output += 4;
                    i++;
                    continue;
                } else if(s[i+1] == 'X') {
                    output += 9;
                    i++;
                    continue;
                }
            } 
            if(s[i] == 'X') {
                if(s[i+1] == 'L') {
                output += 40;
                i++;
                continue;
                } else if(s[i+1] == 'C') {
                    output += 90;
                    i++;
                    continue;
                }
            }
            if(s[i] == 'C') {
                if(s[i+1] == 'D') {
                output += 400;
                i++;
                continue;
                } else if(s[i+1] == 'M') {
                    output += 900;
                    i++;
                    continue;
                }
            }
            output += a[s[i]];
            }
        return output;
    }
};