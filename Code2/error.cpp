#include <iostream>
using namespace std;

void print(int n){  //3 2 1 0 
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << endl;
        return;
    }
    print(n --); // 3-1 2-1  1-1
    cout << n << endl;//0 1
}

int main() {
    int num = 3;
    print(num);
}