#include <iostream>
using namespace std;

// Sum 1 to n


// Parametrized Recursion

// int sum(int i, int s) {

//     if (i < 1) {
//         return s;
//     }

//     return sum(i - 1, s + i);
// }

// Functional way

 int sum(int n) {

    if (n < 1) {
        return n;
    }

    return n + sum(n - 1);
}

int main() {

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    cout << "Sum : " << sum(n);

    return 0;
}