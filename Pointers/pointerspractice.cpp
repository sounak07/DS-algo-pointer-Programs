#include <iostream>
using namespace std;

int main()
{
  int arr[] = { 4, 5, 6, 7 };
	int* p = (arr + 1);
	cout << *arr + 10 <<endl;
	return 0;
}
