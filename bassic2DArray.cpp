#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

/* Time to refresh on C/C++!! */

// 2-d arrays [row][column]

int main(){

  // Variable = (condition) ? true : false

  int myFavNums[5][5];

  int counter = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      myFavNums[i][j] = counter;
      counter ++;
    }
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cout << myFavNums[i][j] << " ";
    }
    cout << endl;
  }

  cout << myFavNums[2][4] << endl;

}
