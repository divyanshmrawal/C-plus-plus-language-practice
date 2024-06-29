//QUESTION-->
//There are three given ranges. Write a C program that reads a floating-point number and finds the range where it belongs from four given ranges

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x=user input number
	int x;
	cout<<"Enter your number : ";
	cin>>x;
	
	//identify and Printing range of number 
	
	if(x>0 && x<10){
		cout<<"number lies in the range of 0 to 10";
	}
	
		if(x>10 && x<20){
		cout<<"number lies in the range of 10 to 20";
	}
	
		if(x>20 && x<30){
		cout<<"number lies in the range of20 to 30";
	}
	
		if(x>30 && x<40){
		cout<<"number lies in the range of 30 to 40";
	}
	
	
	return 0;
}
