bool check2(char input[], int start, int end) {

  if(start >= end)
  {
    return true;
  }

  if(input[start] == input[end]){

    bool ans = check2(input , start + 1, end - 1);

  	return ans;
  }  else {

  	return false;
 }

}



bool checkPalindrome(char input[]) {
    // Write your code here
  int n = 0;
  while (input[n] != '\0')
   {
       ++n;
   }

  if(n == 0){
    return true;
  }

  return check2(input, 0 , n - 1);

}
