#include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0){
  int ans = 0;
  for(int i = si; i < size;i++){
    ans+=a[i];
  }
}

int sum2(int a, int b, int c, int d){     //start giving default arguments from right -- cannot be asigned before
  return a + b + c + d;
}

int main(){
  int a[20];

  cout<< sum(a, 20)<<endl;
}
