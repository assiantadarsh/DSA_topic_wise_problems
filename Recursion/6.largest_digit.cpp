#include<iostream>
#include<climits>
using namespace std;

// Find the largest digit.

int largest_digit(int n , int max){
    if(n == 0){
        return max;
    }

    int rem = n % 10;

    if(max < rem){
        max = rem;
    }

    return largest_digit(n / 10 , max);
}

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int ans = largest_digit(n , INT_MIN);

    cout<<"Digit sum = "<<ans;
}