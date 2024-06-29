//QUESTION-->
//Write a C program to find the odd, even, positive and negative numbers from a given number (integer) and print a message 'Number is positive odd' or 'Number is negative odd' or 'Number is positive even' or 'Number is negative even'. If the number is 0 print "Zero"

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//variable declaration
	int x;
	
	//Accepting user input
	cout<<"Enter your number : ";
	cin>>x;
	
	if(x%2==0 && x>0){
		cout<<"Positive even Number.";
	}
	
	else if(x%2!=0 && x>0){
		cout<<"Positive odd Number.";
	}
	
	else if(x%2==0 && x<0){
		cout<<"Negative even number.";
	}
	
	else if(x%2!=0 && x<0){
		cout<<"Negative odd number.";
	}
	
	else if(x==0){
		cout<<"Number is zero.";
	}
	
	return 0;
}
