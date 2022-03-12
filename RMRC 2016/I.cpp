#include <bits/stdc++.h>
using namespace std;
int n = 0;
string currentline = "";

//string to pair
pair<string, int> stopr(string s) {
    stringstream str(s);
    string value, stringPart;
    int numberPart;
    for(int i = 0; i < 2; i++) {
        str >> value;
        if(isalpha(value[0])) {
            stringPart = value;
         }else{ 
             (i == 1)? numberPart = stoi(value): numberPart = stoi(value)/2;
            }
    }
    return make_pair(stringPart, numberPart);
}

//sort with radius
bool swr(pair<string, int> a, pair<string, int> b) {
    return (a.second < b.second);
}

int main() {
  vector<pair<string, int>> cups;
    cin >> n;
    getline(cin, currentline); // empty line
    for (int i = 0; i < n ; ++i ) {
        getline(cin, currentline);
        cups.push_back(stopr(currentline));
    }
    //sorting vector
    sort(cups.begin(), cups.end(), swr);
    for(auto a: cups) {
        cout << a.first << endl;
    }

  return 0;
}