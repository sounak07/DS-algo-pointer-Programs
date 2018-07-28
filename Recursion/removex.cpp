// Change in the given string itself. So no need to return or print anything

void helper(char input[], int i) {

  if(i == 0){
    return;
  }

  if(input[0] == 'x'){

    helper(input + 1 , i - 1 );

    for (int n = 0; n < i; n++)
    {
      input[n] = input[n+1];
    }

   } else {
    helper(input + 1 , i - 1 );
  }

}


void removeX(char input[]) {
    // Write your code here
  int n = 0;

  while (input[n] != '\0') {
    ++n;
  }


  helper(input, n);

}
