class Student {

public:
	int rollNumber;

private:
	int age;

public:


	~Student (){
		cout<< "Destructor"<<endl;
	}

	//Default Constructor
/*	Student(){
		cout<< "Constructor Called"<<endl;
	} */

	//paramitarised Constructor
	Student(int rollNumber){
		cout<<"Constructor 2 called"<<endl;
		rollNumber = rollNumber;
	}

	Student(int a, int r){
		cout<<"Constructor 3 called"<<endl;
		rollNumber = r;
		age = a;
	}

  void display() {
    cout<< age << " " << rollNumber<<endl;
  }

  int getAge(){
    return age;
  }

  void setAge(int a, int passcode){
    if(passcode != 123){
      return;
    }
    if(a<0){
      return;
    }
    age = a;
  }
};
