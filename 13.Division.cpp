//QUESTION -->
//Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	
	//Variable decelaration
    float firstnum,secnum;
	
	//Accepting first-num
	cout<<"Enter your First number : ";
	cin>>firstnum;
	
	//Accepting secound-num
	cout<<"Enter your Secound number : ";
	cin>>secnum;
	
	//If condition is true
	if(secnum!=0){
		//print --
		cout<<"On dividing 2 numbers : "<<firstnum/secnum;
	}
	
	//If condition is false
	else{
	//print --
		cout<<"Division is not possible.";
	}
	return 0;
}
