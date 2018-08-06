#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
  Student s1;

  s1.display();

  Student s2;

  s2.display();

  Student * s3 = new Student;
  s3 -> display();


  cout<<"paramitarised Constructor Demo"<<endl;
  Student s4(10);

  s4.display();

  Student * s5 = new Student(101);
  s5 ->display();

  Student s6(12,2);
  s6.display();


}
