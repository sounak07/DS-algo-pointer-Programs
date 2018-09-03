void merge(int arr[], int m, int r){

  int n1 = m;
  int n2 = r-m;

  int L[n1], R[n2];

  int k = 0;
  for(int i = 0;i<n1;i++){
    L[i] = arr[i];
  }

  for(int i = 0;i<n2;i++){
    R[i] = arr[m+i];
  }

  int i =0, j = 0;
  k = 0;
  while(i<n1 && j<n2){
    if(L[i]<=R[j]){
      arr[k] = L[i];
      i++;
    }else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while(i<n1){
    arr[k] = L[i];
    i++;
    k++;
  }

  while(j<n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort2(int input[], int l, int r){
  if(l<r){
    int m = (l+r)/2;
  
  mergeSort2(input, l,m);
  mergeSort2(input, m+1, r);
  merge(input, m,r);

  }
}


void mergeSort(int input[], int size){
	// Write your code here
  mergeSort2(input,0,size-1);
}
