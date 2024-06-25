//QUESTION-->
//Write a C program that accepts a distance in centimeters and prints the corresponding value in inches

//ANSWER-->
#include <iostream>

using namespace std;
int main() {
	//x=Distance in centimeters,y=distance in inches
	float x,y;
	
	//Accepting distance in centimeters
	cout<<"Enter Distance in centimeters : ";
	cin>>x;
	
	y=x*0.3937;
	
	//Printing distance in inches
	cout<<"Distance in inches : "<<(float)y;
	
	return 0;
}
