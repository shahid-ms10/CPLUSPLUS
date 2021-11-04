#include <iostream>
using namespace std;
class Complex{
    private:
    int rp;
    int ip;
    public:
    Complex(int rp, int ip){
        this-> rp= rp;
        this-> ip= ip;
    }
    void print(){
        cout<<this->rp<<" + i"<<this->ip;
    }
    void add(Complex n2){
        this->rp = this->rp + n2.rp;
        this->ip = this->ip + n2.ip;
    }
    void multiply(Complex n2){
        int A= (this->rp*n2.rp) - (this->ip*n2.ip);
        int B= (this->rp*n2.ip) + (this->ip*n2.rp);
        this->rp= A;
        this->ip= B; 
    }

};