#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
string myset = "You are close";
string myset2 = "Congrats, you got this";
string myset3 = "Try again :(";

int x;
cout << "Write a number: ";
cin>>x;

if (x>sqrt(36)) {
cout << myset;}
else if (x==sqrt(36)) {
cout << myset2;}
else {
cout << myset3;}
return 0;
}
