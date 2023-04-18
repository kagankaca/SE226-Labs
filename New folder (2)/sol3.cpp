#include <iostream>
using namespace std;

// Function to calculate the value of each term in the equation
double termValue(int n, int k) {
    if (k == 0) {
        return 1.0;
    }
    double value = (double)n / k;
    return value * termValue(n, k-1);
}

// Recursive function to calculate the sum of the terms
double equation(int n, int k) {
    if (k == 0) {
        return 0.0;
    }
    double term = termValue(n, k);
    return term + equation(n, k-1);
}

// Main function to take input and call the recursive function
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    double result = equation(n, 10);
    cout << "Result: " << result << endl;
    return 0;
}
