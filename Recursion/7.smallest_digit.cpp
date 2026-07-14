#include<iostream>
#include<climits>
using namespace std;

// Find the smallest digit.

int smallest_digit(int n , int min){
    if(n == 0){
        return min;
    }

    int rem = n % 10;

    if(min > rem){
        min = rem;
    }

    return smallest_digit(n / 10 , min);
}

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int ans = smallest_digit(n , INT_MAX);

    cout<<"Digit sum = "<<ans;
}