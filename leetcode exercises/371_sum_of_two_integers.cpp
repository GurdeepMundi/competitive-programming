/**
* @file Gandalf's Spell.cpp
 * @author Gurdeep Singh (gurdeepmundi10@gmail.com)
 * @brief Leetcode problem solution
 * @date 2022-03-07
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b) {
  //while there are no carry bits remaining, keep adding
  while(b != 0) {
    unsigned int temp = a & b; //generate carry bits
    a = a ^ b; //add two numbers while ignoring carry bits
    b = temp << 1; //left shift the bits to bring to carry bits place
  }
  return a;
}

int main() {
  cout << getSum(3, 5);
  return 0;
}