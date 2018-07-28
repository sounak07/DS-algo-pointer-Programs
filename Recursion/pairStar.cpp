// Change in the given string itself. So no need to return or print the changed string.

void star(char input[], int n){

  if(n==1){
    return;
  }

  if(input[0] == input[1]) {


    for(int i = n; i >= 1;i--){
      input[i+1] = input[i];
    }

    input[1] = '*';

    star(input + 1, n );

  } else {
    star(input + 1, n - 1);
  }
}




void pairStar(char input[]) {
    // Write your code here
  int n = 0;
  while (input[n] != '\0')
   {
       ++n;
   }

  star(input, n);

}
