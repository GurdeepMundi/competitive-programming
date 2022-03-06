/**
 * @file Head Guard.cpp
 * @author Gurdeep Singh (gurdeepmundi10@gmail.com)
 * @brief A solution for the Calgary Collegiate Comptetitive Programming Contest 2022, Problem A
 * @date 2022-03-05
 * @copyright Copyright (c) 2022
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
  string input, output="", temp;
  while(cin>>input) {
      output = "";
      input += '0';
      int counter = 0;
      char previous = '0';
      for(auto a: input) {
          if(a == previous) {
              counter++;
          } else {
              if(previous == '0') {
                  counter++;
                  previous = a;
                  continue;
              }
              output += to_string(counter);
              output += previous;
              counter = 1;
          }
          previous = a;
      }
      cout << output << endl;
  }
  return 0;
}