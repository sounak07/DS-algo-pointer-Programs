#include<bits/stdc++.h>
using namespace std;



int main()
{

  int t;
  cin>>t;

  while(t--)
  {
    unordered_map<string, int> field;

    string ar;
    cin>>ar;
    int n = ar.length();
    char char_array[n + 1];


    strcpy(char_array, ar.c_str());
    int n = char_array[0];
    int m = char_array[0];
    int k = char_array[0];
    string* arr = new string[k];
    for(int i=0;i<k;i++)
    {
     cin>>arr[i];
     field[arr] = 1;
    }

    long long count = 0;

    for(int i=0;i<k;i++)
    {
      string kr = arr[i];
      int j = kr.length();
      char ch_arr[j + 1];


      strcpy(ch_arr, kr.c_str());
      int w = ch_arr[0];
      int y = ch_arr[1];


    }


    }
  }
