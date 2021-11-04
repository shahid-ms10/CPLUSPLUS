#include<iostream>

using namespace std;

bool sq_add(int a, int b, int c){
    if((a*a)==(b*b)+(c*c)){
        return true;
    }
    else{
        return false;
    }
}

bool py_triplet(int a, int b, int c){
    if((a>b)&&(a>c)&&(sq_add(a,b,c))){
        return true;
    }
    else if((b>c)&&(sq_add(b,a,c))){
        return true;
    }
    else if(sq_add(c,a,b)){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(py_triplet(a,b,c)){
        cout<<"Pythagorian Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorian Triplet"<<endl;
    }
    return 0;
}