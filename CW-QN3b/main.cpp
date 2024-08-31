#include <iostream>
using namespace std;

//Find the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//Reduce the fraction
int reduce(int &num, int &denom) {
    //Return 0 if either numerator or denominator is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    //Get the Greatest common divisor of num and denom
    int divisor = gcd(num, denom);

    //Lower num and denom by dividing them by the GCD
    num /= divisor;
    denom /= divisor;

    return 1;
}

int main() {
    int num, denom;

    //Input numerator
    cout << "Enter numerator: ";
    cin >> num;
    //Input denominator
    cout << "Enter denominator: ";
    cin >> denom;

    //Lower function and check result
    if (reduce(num, denom) == 1) {
        cout << "lower fraction: " << num << "/" << denom << endl;
    } else {
        cout << "Invalid inputs!" << endl;
    }

    return 0;
}
