//QUESTION-->
//Write a C program to check whether the three given lengths (integers) of three sides of a triangle form a right triangle or not. Print "Yes" if the given sides form a right triangle otherwise print "No"

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int x,y,z;
	
	//Accepting lengths of triangle 
	cout<<"Enter length of 1st side of triangle : ";
	cin>>x;
	
	cout<<"Enter length of 1st side of triangle : ";
	cin>>y;
	
	cout<<"Enter length of 1st side of triangle : ";
	cin>>z;
	
	//Checking figure is triangle or not
	if((x*x)+(y*y)==z*z && (x*x)+(z*z)==y*y && (y*y)+(z*z)==x*x){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
	return 0;
}
