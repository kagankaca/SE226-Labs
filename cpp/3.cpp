#include <iostream>
using namespace std;

int main(){
   string name;
   int lab;
   int midterm;
   int final;
   float lastScore;
   cout<<"Name: ";
   cin>>name;
   cout<<"\nLab: ";
   cin>>lab;
   cout<<"\nMidterm: ";
   cin>>midterm;
   cout<<"\nFinal: ";
   cin>>final;
   lastScore=(lab*0.25)+(midterm*0.35)+(final*0.4);
   cout<<"\nFinal Score is "<<lastScore;


   return 0;
}