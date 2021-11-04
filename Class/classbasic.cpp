#include <iostream>

using namespace std;

class student{
    public:
    int age;
    int rollnumber;
    string name;
    private:
    int dob;
    public:
    void display(){
        cout<<age<<" "<<rollnumber<<" "<<name<<" "<<dob;
    }
    void setdob(int a){
        if(a<0){
            return;
        }
        dob=a;
    }
    int get(){
        return dob;
    }
};

int main(){
    student s1;
    s1.age=21;
    s1.rollnumber=51;
    s1.name="Shahid";
    s1.setdob(-10062000);
    s1.get();
    s1.display();
    //cout<<s1.age<<" "<<s1.rollnumber<<" "<<s1.name;
}