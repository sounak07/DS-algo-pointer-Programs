class Student {

public:
  int age;
  int const rollNumber;
  int &x;

  Student(int r, int age) : rollNumber(r), age(age), x(this-> age){
    //rollNumber = r;
  }
};
