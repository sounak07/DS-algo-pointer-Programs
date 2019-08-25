void inplaceHeapSort(int pq[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */

  for(int i = 1;i<n;i++){

    int childIndex = i;

    while(childIndex > 0){
      int parentIndex = (childIndex - 1)/2;

      if(pq[childIndex] < pq[parentIndex]){
        int t = pq[childIndex];
        pq[childIndex] = pq[parentIndex];
        pq[parentIndex] = t;

      } else {
        break;
      }

      childIndex = parentIndex;
    }

  }

  int size = n;

  while(size > 1){
  int temp = pq[0];
  pq[0] = pq[size-1];
  pq[size-1] = temp;

  size--;

  int parentIndex = 0;
  int lci = 2*parentIndex+1;
  int rci = 2*parentIndex+2;

  while(lci < size){


    int minIndex = parentIndex;

    if(pq[minIndex] > pq[lci]){
      minIndex = lci;
    }

    if(pq[minIndex] > pq[rci] && rci < size{
      minIndex = rci;
    }

    if(minIndex == parentIndex){
      break;
    }


    int temp = pq[minIndex];
    pq[minIndex] = pq[parentIndex];
    pq[parentIndex] = temp;

    parentIndex = minIndex;
    lci = 2*parentIndex+1;
    rci = 2*parentIndex+2;



  }
}

}
