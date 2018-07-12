#include <iostream>
using namespace std;

int sum(int *a, int size){
  int ans = 0;
  for(int i = 0; i < size; i++ ){
    ans = ans + a[i];
  }
  return ans;
}

int main()
{
  int a[10] = {3,1,3};
  cout<< sum(a+1, 2)<<endl;

}
