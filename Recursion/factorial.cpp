#include <iostream>
using namespace std;

int fact(int n){
  if(n == 0){
    return 1;
  }
  int ans = fact(n - 1);
  int output = n * ans;
  return output;
}

int main(){
  int n;
  cin>> n;
  int output = fact(n);

  cout<< output << endl;
}
