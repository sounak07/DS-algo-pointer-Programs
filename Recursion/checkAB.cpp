//a. The string begins with an 'a'
//b. Each 'a' is followed by nothing or an 'a' or "bb"
//c. Each "bb" is followed by nothing or an 'a'


bool checkAB(char input[]) {
	// Write your code here
  if(input[0] == '\0')
   return true;
   if(input[0] != 'a'){
    return false;
  }



  if(input[0]=='a' ){
    if(input[1] == '\0'){
      return true;
    }

  else if(input[1] == 'a'){

    return checkAB(input+1);

  }
  else if(input[1] == 'b' && input[2] == 'b'){

        return checkAB(input+3);

      }
  }
   return false;



}
