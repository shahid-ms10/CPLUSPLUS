#include <iostream>
#include <string.h>

using namespace std;

class Student{
    int age;
    public:
    char *name;
    Student(int age, char *name){
        this->age=age;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<age<<" "<<name;
    }
    Student(Student const &s){
        this->age=age;
        //this->name=name;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
    }
};

int main(){


}