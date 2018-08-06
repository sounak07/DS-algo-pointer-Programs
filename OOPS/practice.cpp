#include <iostream>
using namespace std;

class Student{
    public :
    char *name;
    int rollNo;
    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << rollNo;
    }
};

int main() {
    Student s(12);
    s.print();
}
