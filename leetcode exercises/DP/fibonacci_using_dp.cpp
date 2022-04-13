#include <bits/stdc++.h>
using namespace std;
int mem[100];
//this funciton will find the nth fibonacci number
int fib(int n) {
    //if already found, return from previous result
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(mem[n] != -1)
    return mem[n];
    return mem[n] = fib(n-1) + fib(n-2);
}

int main() {
  //intialize memory list to -1
  memset(mem, -1, sizeof(mem));
  cout << fib(15);
  return 0;
}