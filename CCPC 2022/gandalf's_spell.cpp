/**
 * @file Gandalf's Spell.cpp
 * @author Gurdeep Singh (gurdeepmundi10@gmail.com)
 * @brief A solution for the Calgary Collegiate Comptetitive Programming Contest 2022, Problem D
 * @date 2022-03-05
 * @copyright Copyright (c) 2022
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
  map<char, string> mymap;
  map<char, string>::iterator it;
  string keywords;
  getline(cin, keywords);
  //counting number of words given
  string words;
  getline(cin, words);
  //checking if the keywords are of same size as mapped words
  int totalCount = count(words.begin(), words.end(), ' ');
  if(totalCount+1 != keywords.length()) {
      cout << "False";
      return 0;
  }
  stringstream str(words);
  string test;
  for(int i = 0; i < keywords.length(); i++) {
      str >> test;
      it = mymap.find(keywords[i]);
      //checking if keyword is already present somewhere
      if(it == mymap.end()) {
          for(auto a: mymap) {
              if (a.second == test) {
                  cout << "False";
                  return 0;
              }
          }
          //add to the map if not existing already
          mymap[keywords[i]] = test;
      } else if(mymap.at(keywords[i]) != test) {
          //if keyword is there in the map but mapped to diffrent word
              cout << "False";
              return 0;
      }
  }
  cout << "True";
  return 0;
}