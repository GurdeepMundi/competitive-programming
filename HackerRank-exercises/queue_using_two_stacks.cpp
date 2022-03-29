#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
stack<int> buffer;

void performQuery(int query, stack<int> &que) {
  switch(query) {
    case 1:
    int newElement;
    cin >> newElement;
    que.push(newElement);
    break;
    case 2:
    if(buffer.empty()){
      while(!que.empty()) {
        buffer.push(que.top());
        que.pop();
      }
    }
    buffer.pop();
    break;
    case 3:
        if(buffer.empty()){
      while(!que.empty()) {
        buffer.push(que.top());
        que.pop();
      }
    }
    cout << buffer.top() << endl;
    break;
  }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int q, query;
    cin >> q;
    stack<int> que;
    for(int i = 0; i < q; i++) {
      cin >> query;
      performQuery(query, que);
    }
    return 0;
}
