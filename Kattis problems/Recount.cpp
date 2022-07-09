#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> people;
unordered_map<string, int>::iterator itr;
int main() {
	string name;	
		do{
		getline(cin, name);
		itr = people.find(name);
		if(itr == people.end()){
			people[name] = 1;
		}else {
			people[name]++;
		}
	}while(name!= "***");
	unordered_map<string, int>::iterator winner = people.begin();
	bool tie=false;
	for(itr = people.begin(); itr!=people.end(); itr++){
		if(itr->second == winner->second){
		    tie=true;
		}else if(itr->second > winner->second){
		    tie=false;
		    winner=itr;
		}
    }
    if(!tie){
        cout << winner->first;
        return 0;
    }
    cout << "Runoff!";
	
	return 0;
}