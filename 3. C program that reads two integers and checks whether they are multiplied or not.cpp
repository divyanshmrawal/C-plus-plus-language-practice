
//QUESTION -->  Write a C program that reads two integers and checks whether they are multiplied or not.

//ANSWER -->

#include <iostream>
using namespace std;


int main() {
	
	//CONCEPT --> If we devide num1 to num2 and remainder becomes 0 then numbers are multiplied 
	
	//Accepting 2 user-input
	
	//Number-1
	int num1;
	cout<<"Enter your first number : ";
	cin>>num1;
	
	//Number-2
		int num2;
	cout<<"Enter your secound number : ";
	cin>>num2;
	
	//If condition is true then
	if(num1%num2==0 || num2%num1==0){
		//print Multiplied
		cout<<"Multiplied!";
	}
	
	//If condition is false then
	else{
		//print Not multiplied
		cout<<"Not multiplied";
	}
	
	return 0;
}
