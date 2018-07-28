#include <cmath>

int helper(char input[], int n){

  if(n == 1){
    int i = input[n - 1] - '0';
    return i;
  }

  int a = helper(input + 1, n - 1);

  int b = input[0] - '0';

  return b * pow(10, n - 1) + a;
}

int stringToNumber(char input[]) {
    // Write your code here

  int n = 0;
  while (input[n] != '\0')
   {
       ++n;
   }

  return helper(input, n);

}
