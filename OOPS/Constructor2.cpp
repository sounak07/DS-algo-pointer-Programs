#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
  Student s1;    //Constructor 1 called

  Student s2(10);  //Constructor 2 called

  Student s3(11,34) //Constructor 3 called

  Student s4(s3);  //Copy Constructor Called

  s1 = s2;          //Copy Assignment called

  Student s5 = s4;   //Copy Constructor Called
}
