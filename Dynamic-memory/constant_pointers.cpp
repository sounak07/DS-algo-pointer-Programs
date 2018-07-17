#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int j = 21;
	int const * p = &i;   //here the pointer is not const the path is, Value Can't be changed through this path

	p = &j;

	int * const p2 = &i;      // pointer is const value is not
	(*p2)++;
	//p2 = &j;                //not valid


	int const * const p3 = &i;  //Both pointer and Value is const
	p3 = &j;                    //invalid
	(*p3)++;                    //invalid
}
