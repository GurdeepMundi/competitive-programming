#include <bits/stdc++.h>
using namespace std;
int s, n, mf=0, difference = 0;// mf = more friends
int as[1000];//as = already seated
int main() {
  cin >> s >> n;
  //adding extra seat
    cin >> as[0];
    if(as[0] == 1) {
        as[n] = s+1;
    } else {
        if(as[0] % 2 == 1) {
            mf += (as[0])/2;
            as[n] = s+1;
        } else {
            mf += ((as[0])/2) - 1;
            as[n] = s+2;
        }

    }

    for(int i = 1; i < n; i++) {
        cin >> as[i];
    }

    for(int i = 0; i < n; i++) {
        int temp = mf;
        difference = as[i+1] - as[i] - 1;
        (difference % 2 == 1)? mf += difference/2: mf += (difference/2) - 1;
    }
    cout << mf;
  return 0;
}