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

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
  if(num == 0 || num ==1){
    output[0] = "";
    return 1;
  }

  int ans = num%10;
 // string * newOutput = new string[1000];
  int c = keypad(num/10, output);
  string keyWord = keys(ans);
  int s = keyWord.length();



  int k = c;
  for(int i = 0;i<s-1;i++){
    for(int j = 0;j<c;j++){
      output[j+k] += output[j];
    }

    k += c;
  }

  k = 0;

   for(int i = 0;i<s;i++){
    for(int j = 0;j<c;j++){
      output[j+k] += keyWord[i];
    }

    k += c;
  }

  c = k;

  return c;
}
