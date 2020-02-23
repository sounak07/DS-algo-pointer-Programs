#include <bits/stdc++.h>
using namespace std;

int clearLastI(int n, int i)
{
	int t = (~0);

	int x = (t << i);

	int ans = (n & t);

	return ans;
}

int main()
{
	int n = 15;
	int i = 3;
	cout << clearLastI(n, i) << endl;
}