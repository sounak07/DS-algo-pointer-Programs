bool checkAB(char input[]) {
	// Write your code here
  if(input[0] == '\0'){
    return false;
  }



  if(input[0]=='a'){
    if(input[1] == 'a' || input[1]=='\0'){
      return true;
    } else if (input[1] == 'b' && input[2]=='b' || input[1]=='\0') {
      return true;
    } else {
      return false;
    }
  }
  else if(input[0] == 'b'){
    if(input[1] == 'b' || input[1] == '\0'){

        return true;
      } else  {
        return false;
    }

    } else {
    return false;
  }

  bool out = checkAB(input+1);

}
