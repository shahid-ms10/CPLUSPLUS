#include <iostream>
#include "Fraction_class.cpp"

using namespace std;

int main(){
    Complex n1(2,3);
    Complex n2(3,2);
    int choice;
    cin>>choice;
    if(choice==1){
        n1.add(n2);
        n1.print();
        cout<<endl;
        n2.print();
        cout<<endl;
    }
    if(choice==2){
        n1.multiply(n2);
        n1.print();
        cout<<endl;
        n2.print();
        cout<<endl;
    }
}