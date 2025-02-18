#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool isPerfectNumber(int number) {

    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    return sum == number; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num)) {
        cout << "true" << endl; 
    } else {
        cout << "false" << endl; 
    }

    return 0;
}