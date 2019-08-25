#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int highestFrequency(int *a, int n)
{

  unordered_map<int, int> hash;

  int max = 0;
  int res = 1;

  for(int i = 0;i < n; i++){
    hash[a[i]]++;

    if(max < hash[a[i]]){
      max = hash[a[i]];
      res = a[i];
    }
  }

return res;
}

vector<int> removeDublicates(int *a,int size){
  vector<int> output;
  unordered_map<int, bool> seen;
  for(int i=0;i<size;i++){
    if(seen.count(a[i]) > 0){
      continue;
    }

    seen[a[i]] = true;
    output.push_back(a[i]);
  }
  return output;
}

#include<bits/stdc++.h>

char* uniqueChar(char *str){
    // Write your code here
  unordered_map<char, int> map;

  for (int i=0; str[i]!='\0'; i++)
     map[str[i]]++;



  char *res = new char[1000000];

  int j = 0;


  for (int i=0; str[i]!='\0'; i++)
  {
    if(map.count(str[i])>0)
   {
      res[j] = str[i];
      j++;
    map.erase(str[i]);

    }

  }


 return res;



}

int main() {
	int a[] = {1,2,3,3,2,1,4,3,6,5,5};
	vector<int> output = removeDublicates(a, 11);
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
