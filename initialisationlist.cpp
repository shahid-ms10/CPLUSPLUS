#include <iostream>

using namespace std;

class Student{
    public:
    int age;
    int const rollnumber;
    int &x;

    Student(int r,int a):rollnumber(r),age(a),x(this->age){
    }
    void display(){
        cout<<age<<" "<<rollnumber<<" "<<x<<endl;
    }
};

int main(){
    Student s1(101,20);
    //s1.age=20;
    s1.display();
}