//QUESTION-->
//Write a C program to remove any negative sign in front of a number


//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	
	int i;
	
	//Accepting negative value from user
	cout<<"Enter your negative number : ";
	cin>>i;
	
	//Converting from negative number to positive number using if and else function
	if(i<0){
		cout<<"Your positive number is : "<<(-1*i);
	}
	
	else{
		cout<<"Number is already positive.";
	}
	
	return 0;
}
