void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int input[], int st, int ed){

  int pi = st;
  int pivot = input[st];

  for(int i = st+1; i <= ed; i++){
    if(pivot >= input[i]){
      pi++;
    }
  }

    swap(&input[st], &input[pi]);

  while(st != pi){
    if(input[st] <= pivot){

      st++;

    } else if(input[ed] > pivot){

      ed--;

    } else {

      swap(&input[st],&input[ed]);
      st++;
      ed--;

    }
  }

   return pi;
}




void quickSort2(int input[], int s, int e){

  if(s>=e){
    return;
  }

     int c = partition(input, s , e);
     quickSort2(input, s , c-1);
     quickSort2(input, c+1 , e);

}



void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */


  quickSort2(input, 0 ,size - 1);

}
