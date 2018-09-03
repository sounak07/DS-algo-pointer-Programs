#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int  t,n,sum=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    sum = n+(n*(n+1))/2;
	    cout<<sum<<endl;

	}
	return 0;
}
