#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    map<pair<int,int>, int> field;
    long long m,n,k;
    int r,c;
    long long sum = 0;
    cin>>n>>m>>k;

    for(int i=0;i<k;i++)
    {
      cin>>r>>c;
      field[make_pair(r,c)] = 1;
    }

    for (auto it=field.begin(); it!=field.end(); ++it)
    {
      int x = (it->first).first;
      int y = (it->first).second;

      if(field.find({x-1, y}) == field.end())
      sum++;

      if(field.find({x+1,y}) == field.end())
      sum++;

      if(field.find({x,y-1}) == field.end())
      sum++;

      if(field.find({x,y+1}) == field.end())
      sum++;
    }

    cout<<sum<<endl;

  }

  return 0;
}
