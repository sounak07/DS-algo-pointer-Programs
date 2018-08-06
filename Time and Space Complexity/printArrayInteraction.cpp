// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int input[], int st, int ed){

  int pi = st+1;
  int pivot = input[st];

  for(int i = st+1; i <= ed; i++){
    if(pivot >= input[i]){
      swap(&input[pi], &input[i]);
      pi++;
    }
  }

    swap(&input[st], &input[pi-1]);

    return pi-1;
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
  quickSort2(input, 0 ,size - 1);

}

void intersection(int input1[], int input2[], int size1, int size2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
  quickSort(input1, size1);
  quickSort(input2, size2);

  int i=0,j=0;

   while(i < size1 && j < size2){

    if(input1[i] == input2[j]){
      cout<< input1[i]<<endl;
      i++;
      j++;
    } else if(input1[i] < input2[j]){
      i++;
    } else {
      j++;
    }

  }

}
