class Student {

private:
  int age;


public:
  char *name;

  Student(int age, char *name){
    this -> age = age;
    //shallow Copy
    //this -> name = name;

    //Deep Copy
    this-> name = new char[strlen(name)+1];
    strcpy(this -> name, name);
  }

  Student (Student const &s){
    this -> age = s.age;
    //this -> name = name;  //shallow Copy

    this -> name = new char[strlen(name)+1];
    strcpy(this ->name, s.name);
  }

  void display(){
    cout<< name << " " << age << endl;
  }
};
