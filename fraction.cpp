#include <iostream>
#include <algorithm>

using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void add(Fraction f2){
        int lcm=this->denominator*f2.denominator;
        int x= this->numerator*f2.denominator;
        int y= this->denominator*f2.numerator;
        this->numerator=x+y;
        this->denominator=lcm;
        simplify();
    }
    void simplify(){
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if((this->numerator%i==0)&&(this->denominator%i==0)){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
};

int main(){
    Fraction f1(5,6);
    Fraction f2(5,6);
    f1.add(f2);
    f1.print();
    f2.print();
}