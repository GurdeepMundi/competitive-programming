#include <bits/stdc++.h>
using namespace std;

vector<string> cellsInRange(string s) {
    vector<string> output;
    char pointerCol = (char)s[0], 
         endCol = (char)s[3];
    char pointerRow = (char)s[1], 
         endRow = (char)s[4];
    
    for( char c = pointerCol; c <= endCol; c++) {
        for(char r = pointerRow; r <= endRow; r++) {
            string temp;
            temp += c;
            temp += r;
            output.push_back(temp);
            if( r == endRow) {
                r = pointerRow;
                break;
            }
        }
        if(c == endCol) {
            break;
        }
    }

    return output;
    }

int main() {
  #ifndef ONLINE_JUDGE
  freopen("./Templates/.input.txt", "r", stdin);
  freopen("./Templates/.output.txt", "w", stdout);
  #endif
   vector<string> output = cellsInRange("A1:F1");
   for(auto a: output) {
       cout << a << endl;
   }
  return 0;
}