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
    Fraction add(Fraction f2){
        int lcm=this->denominator*f2.denominator;
        int x= this->numerator*f2.denominator;
        int y= this->denominator*f2.numerator;
        //this->numerator=x+y;
        int num=x+y;
        //this->denominator=lcm;
        int den=lcm;
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
    Fraction operator +(Fraction f2){
        int lcm=this->denominator*f2.denominator;
        int x= this->numerator*f2.denominator;
        int y= this->denominator*f2.numerator;
        //this->numerator=x+y;
        int num=x+y;
        //this->denominator=lcm;
        int den=lcm;
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
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
    Fraction& operator++(){
        this->numerator=this->numerator+this->denominator;
        simplify();
        return *this;
    }
    Fraction operator++(int){
        Fraction fnew(this->numerator,this->denominator);
        this->numerator=this->numerator+this->denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    Fraction& operator+=(Fraction const &f2){
        int lcm=this->denominator*f2.denominator;
        int x= this->numerator*f2.denominator;
        int y= this->denominator*f2.numerator;
        this->numerator=x+y;
        this->denominator=lcm;
        simplify();
        return *this;
    }
};

int main(){
    Fraction f1(5,6);
    Fraction f2(5,6);
    Fraction f3=(f2+=f1)+=f1;
    f3.print();
    (f2+=f1)+=f1;
    f1.print();
    f2.print();
    // Fraction f3=f1++;
    // f1.print();
    // f3.print();

    // f1.print();
    // ++(++f1);
    // f1.print();
    // Fraction f3 = ++(++f1);
    // f1.print();
    // f3.print();
    // f1.print();
    // f3.print();
    // // Fraction f3=f1.add(f2);
    // // Fraction f4=f1 + f2;
    // // f1.print();
    // // f2.print();
    // // f3.print();
    // // f4.print();
}