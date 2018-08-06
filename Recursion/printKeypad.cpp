#include <iostream>
#include <string>
using namespace std;

char const * keys(int n){
  if(n == 2){
    return "abc";
  } else if(n == 3) {
    return "def";
  } else if(n == 4) {
    return "ghi";
  }  else if(n == 5) {
    return "jkl";
  }  else if(n == 6) {
    return "mno";
  }  else if(n == 7) {
    return "pqrs";
  }  else if(n == 8) {
    return "tuv";
  }  else if(n == 9) {
    return "wxyz";
  }
}

void printKeypad2 (int n, string output){
  if(n == 0 || n == 1){
    cout<< output << endl;
    return;
  }

  int ans = n%10;
  string keyWord = keys(ans);
  int s = keyWord.length();

  for(int i=0;i<s;i++){
    printKeypad2(n/10, keyWord[i]+output);
  }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */

  string output = "";
  printKeypad2(num, output);

}
