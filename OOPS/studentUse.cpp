#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
  //create objects statically
  Student s1;
  Student s2;

  Student s3,s4;

  //s1.age = 24;
  s1.rollNumber = 1;

  //cout<< s1.age << endl;
  cout<< s1.rollNumber << endl;

  cout<< "S1 age "<< s1.getAge() << endl;
  cout<< "S1 Roll "<< s1.rollNumber <<endl;


  s1.display();
  s2.display();

  //create object dynamically
  Student *s5 = new Student;

  //1st way
  //(*s5).age = 25;
  (*s5).rollNumber = 2;
  (*s5).display();

  //2nd way
  //s5 -> age = 25;
  s5 -> rollNumber = 2;
  s5 -> display();

  cout<< "s5 age " << s5->getAge()<<endl;

  //cout<< (*s5).age << endl;
  cout<< s5 -> rollNumber << endl;
}
