#include <bits/stdc++.h>
using namespace std;
vector <int> output;
//moves the current pointer to the next position depending on direction parameter
pair<int, int> movePointer(pair<int, int> direction, pair<int, int> currentLocation) {
    currentLocation.first += direction.first;
    currentLocation.second += direction.second;
    return currentLocation;
} 

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int totalElements = matrix.size() * matrix[0].size(); // size of matrix before adding padding
    //adding buffer/padding to the matrix
    vector<int> a(matrix[0].size(), 1000);//top/bottom buffer
    matrix.insert(matrix.begin(),a);
    matrix.push_back(a);
    //inserting 1000 before and after every row
    for(auto& a: matrix) {
        a.insert(a.begin(), 1000);
        a.push_back(1000);
    }
    
    //create tracking system
    pair<int, int> currentLocation = {1,1}; //marks the current location in the grid
    //operation to move right, down, left, up in that order.
    pair<int, int> operation[4] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    int currentOperation = 0;//selector to select one of the operations (decides which direction to move)
    //fetch m*n elements or total elements
    for(int i = 0; i < totalElements; i++) {
        output.push_back(matrix[currentLocation.first][currentLocation.second]);
        pair<int, int> nextPointer = movePointer(operation[currentOperation], currentLocation);
        if(matrix[nextPointer.first][nextPointer.second] == 1000) {
            //we need to turn direction because next element is explored
            currentOperation = (currentOperation + 1) % 4;
            nextPointer = movePointer(operation[currentOperation], currentLocation);
        }
        matrix[currentLocation.first][currentLocation.second] = 1000;
        currentLocation = nextPointer;
    }
    return output;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("./Templates/.input.txt", "r", stdin);
  freopen("./Templates/.output.txt", "w", stdout);
  #endif

  vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  vector<int> a = spiralOrder(matrix);
  for(auto b: a) cout << b << " ";
  return 0;
}