#include <iostream>
//include the algorthm file to use binary search funciton
#include <algorithm>
#include<vector>
using namespace std;

int main() { 
  //USed the predefined function to binary search the vector
  vector<int> v= {1,2,3,4,5};
  if(binary_search(v.begin(),v.end(),5))
  {
    cout<<"Found in vector"<<endl;
  }
  else
    cout<<"Not found in vector"<<endl;

  //USed the predefined function to binary search the array
  int a[]= {1,2,3,4,5};
  int size=5;
  if(binary_search(a,a+size,5))
  {
    cout<<"Found in array"<<endl;
  }
  else
    cout<<"Not found in array"<<endl;
}