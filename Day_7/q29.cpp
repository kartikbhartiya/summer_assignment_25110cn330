#include <iostream>
#include <cmath>

using namespace std;

int digits(int n){
    if(n == 0) return 0;
    return 1 + digits(n / 10);
}

int rev(int n){
    if(n < 10) return n;
    int rem = n % 10;
    int d = digits(n / 10);
    return rem * pow(10, d) + rev(n / 10);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The reverse of the number is " << rev(n);
}