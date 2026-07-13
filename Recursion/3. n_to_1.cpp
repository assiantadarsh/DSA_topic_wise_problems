#include<iostream>
using namespace std;

// Print n to 1 
// Backtracking

void f(int num,int n){

    if(num > n){
        return;
    }

    f(num+1,n);

    cout<<num<<endl;

}

int main(){
    int n = 10;

    f(1,n);
}
