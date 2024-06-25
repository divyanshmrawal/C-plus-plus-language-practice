//QUESTION-->
//Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.


//ANSWER-->
#include <iostream>

using namespace std;

int main() {
//	x=principal,y=rate of interest,z=time,b=Simple Interest
	int x,y,z,b;
	 //Accepting principal value
	cout<<"Enter value of principal : ";
	cin>>x;
	//Accepting rate of interest value
	cout<<"Enter value of Rate of interest : ";
	cin>>y;
	//Accepting time value
	cout<<"Enter value of Time : ";
	cin>>z;
//calculation
    b=x*y*z;
	//printing result of simple interest
	cout<<"Simple interest : " <<b/100;
	
	return 0;
}
