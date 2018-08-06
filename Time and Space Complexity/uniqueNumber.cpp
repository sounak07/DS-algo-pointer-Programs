// arr - input array
// size - size of array

int FindUnique(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  if(size == 0){
    return 0;
  }

  int s = arr[0];

  return s^FindUnique(arr+1, size-1);
}
