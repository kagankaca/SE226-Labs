#include <iostream>
using namespace std;

int main(){
    cout << "What is your name? ";
    string x;
    cin >> x;
    cout << "Hello " + x;
    cout << "\nWhat is your student number ?";
    string y;
    cin >> y;
    cout << "Your student number is " + y;
    return 0;
}