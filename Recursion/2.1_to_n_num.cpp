#include<iostream>
using namespace std;

// Print 1 to n 
// Backtracking


void f(int num){
    if(num < 1){
        return;
    }

    f(num - 1);
    cout<<num<<endl;
}

int main(){
    int n = 10;
    f(n);
}
