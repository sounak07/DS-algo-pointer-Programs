#include<bits/stdc++.h>


class PriorityQueue {
  vector<int> pq;

public:
  PriorityQueue(){

  }

  bool isEmpty(){
    return pq.size() == 0;
  }

  //Return size of PriorityQueue = no. of elements present
  int getSize(){
    return pq.size();
  }

  int getMin(){
    if(isEmpty){
      return 0;
    }

    return pq[0];
  }

  int insert(int element){
    pq.push_back(element);

    int childIndex = pq.size() - 1;

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

  int removeMin(){

    int ans = pq[0];
    pq[0] = pq[pq.size() - 1];

  `pq.pop_back();

    int parentIndex = 0;
    int lci = 2*parentIndex+1;
    int rci = 2*parentIndex+2;

    while(lci < pq.size()){


      int minIndex = parentIndex;

      if(pq[minIndex] > pq[lci]){
        minIndex = lci;
      }

      if(pq[minIndex] > pq[rci] && rci < pq.size()){
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

    return ans;

  }



};
