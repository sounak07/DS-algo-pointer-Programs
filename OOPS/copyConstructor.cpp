#include <iostream>
using namespace std;
#include "student.cpp"

int main(){

  Student s1(10,21);
  Student s2(11,22);

  Student * s3 = new Student(12,45);

  s2 = s1;

  *s3 = s1;

  s2 = *s3;

  delete s3;

  /*
  Student s1(10,21);

  cout<<"S1"<<endl;
  s1.display();

  Student s2(s1);
  cout<<"S2"<<endl;
  s2.display();

  Student * s3 = new Student(11,23);
  cout<<"S3"<<endl;
  s3->display();

  Student s4(*s3);

  Student * s5 = new Student(*s3);
  Student * s6 = new Student(s1);
  */
}
