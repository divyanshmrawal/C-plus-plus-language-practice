//QUESTION-->
// Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) 

//ANSWER-->
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	
	//Variable declaration
	float x,y;
	
	//Accepting number
	cout<<"Enter your number : ";
	cin>>x;
	
	//Calculation
	y=sin(1/x);
	
	//printing result
	cout<<"Your sin(1/x) value : "<<(float)y;
	
	return 0;
}
