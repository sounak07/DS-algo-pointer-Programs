#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t = 4;
    cin>>t;
    char k;
    cin>>k;
    while (t--)
    {
        string quote;
        int flag = 0;
        getline(cin, quote);
        string word;
        vector<string> words;

        for(stringstream s(quote); s>>word;)
          words.push_back(word);


        for (int i=0; i<words.size(); i++)
        {
            if (words[i] == "not")
            {
                flag = 1;
                break;
            }
        }




        if(flag == 1)
        {
          cout<<"Real Fancy\n";
        } else {
          cout<<"regularly fancy\n";
        }
    }
    return 0;

}
