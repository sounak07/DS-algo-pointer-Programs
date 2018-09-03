#include <iostream>
using namespace std;
#include "fraction.cpp"

int main(){
  Fraction f1(10,2);

  Fraction f2(15,4);

  Fraction const f3;

  cout<< f3.getNumerator() << " " << f3.getDenominator()<<endl;

  f3.setNumerator(10);

  // f1.add(f2);
  //
  // f1.print();
  // f2.print();
  //
  // f1.multiply(f2);
	// f1.print();
	// f2.print();

}
