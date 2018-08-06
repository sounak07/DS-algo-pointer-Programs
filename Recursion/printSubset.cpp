void helper(int input[], int s, int output[], int m){

  if( s == 0){
    for(int i = 0;i<m;i++){
      cout<< output[i]<< " ";
    }

    cout<<endl;

    return;
  }

  int newOutput[100],i;

  helper(input+1,s-1,output,m);

  for(i = 0; i<m;i++){
    newOutput[i] = output[i];
  }

  newOutput[i] = input[0];
  helper(input+1,s-1,newOutput,m+1);



}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
  	int m = 0;
    int output[m];

  	helper(input, size, output, m);
}
