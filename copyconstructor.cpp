#include <iostream>
#include <string.h>

using namespace std;

class Student{
    public:
    int age;
    char *name;
    Student(int age, char *name){
        this->age=age;
        //shallow copy
        //this->name=name;
        //deep copy
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    //Copy Constrctor
    Student(Student &s){
        this->age=age;
        //shallow copy
        //this->name= name;
        //Deep copy
        this->name= new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void display(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    char name[]="abcd";
    Student s1(20,name);
    Student s2(s1);
    s2.name[0]='X';//inbuilt copy constructor use shallow copy 
    s1.display();
    s2.display();
}