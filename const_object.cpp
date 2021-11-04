#include <iostream>
using namespace std;

class Student{
    private:
    int age;
    int rollnumber;
    public:
    Student(int age, int rollnumber){
        this->age=age;
        this->rollnumber=rollnumber;
    }
    void display(){
       cout<<age<<" "<<rollnumber<<endl;
    }
};

int main(){
    Student s1(40,42);
    s1.display();
    //Student const s2;

}