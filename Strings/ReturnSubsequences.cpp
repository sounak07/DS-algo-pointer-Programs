#include <iostream>
using namespace std;

int subs(string input, string output[]){
  if(input.empty()){
    output[0] = "";
    return 1;
  }

  string ans = input.substr(1);
  int count = subs(ans, output);
  for(int i=0;i<count;i++){
    output[i+count] = input[0] + output[i];
  }

  return 2 * count;
}

int main(){
  string input;
  cin>>input;
  string * output = new string[1000];
  int count = subs(input, output);
  for(int i = 0;i < count; i++){
    cout<< output[i] <<endl;
  }
}
