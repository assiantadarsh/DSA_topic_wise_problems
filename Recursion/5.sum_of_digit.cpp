#include<iostream>
using namespace std;

// Find Digit sum using Recursion ?

int digit_sum(int n , int sum){
    if(n == 0){
        return sum;
    }

    int rem = n % 10;
    sum += rem;

    int div = n / 10;

    return digit_sum(div ,sum);
}
int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int ans = digit_sum(n , 0);

    cout<<"Digit sum = "<<ans;
}