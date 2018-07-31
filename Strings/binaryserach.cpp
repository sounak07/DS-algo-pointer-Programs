// input - input array
// size - length of input array
// element - value to be searched
int search(int input[], int s, int e, int x){

  while(s<=e){
    int mid = (s+e)/2;


    if(input[mid] == x){
      return mid;
    } else if(input[mid] >  x){
      return search(input, s ,mid-1, x);
    } else if(input[mid] < x){
      return search(input, mid+1 ,e, x);
    }


  }

  return -1;
}


int binarySearch(int input[], int s, int e) {
    // Write your code here
  if(s == 0){
    return -1;
  }


  return search(input, 0, s - 1, e);

}
