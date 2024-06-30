//QUESTION-->
//Write a C program that reads two integers and divides the first number by second, print the result of this division with two digits after the decimal point and prints “Division not possible..!” if the division is not possible

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int n1,n2,d;
	
	//Accepting numbers from user
	cout<<"Enter 1st number : ";
	cin>>n1;
	
	cout<<"Enter 2nd number : ";
	cin>>n2;
	
	//Checking result of division
	if(n1%n2==0){
		d=n1/n2;
	}
	cout<<"Result of division : "<<d;
	
	if(n2%n1==0){
		d=n2/n1;
	}
	cout<<"Result of division : "<<d;
	
	return 0;
}
