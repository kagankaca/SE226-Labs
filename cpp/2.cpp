#include <iostream>
using namespace std;

int main(){
    int var1;
    int var2;
    int sum;
    int diff;
    int mult;
    cout<<"Variable 1: ";
    cin >> var1;
    cout<<"\nVariable 2: ";
    cin>>var2;
    sum = var1 + var2;
    diff = abs(var1-var2);
    mult = var1 * var2;
    cout<<"Variable 1 : " <<var1 <<"\nVariable 2: " << var2 << "\nSummation: " << sum<<"\nDifference: " <<diff<<"\nMultiplication: " <<mult;
    return 0;
}