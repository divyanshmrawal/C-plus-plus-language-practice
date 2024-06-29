//QUESTION-->
//Write a C program that takes two integers and tests whether they are multiplied or not

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x and y are to number 
	//variable declaration
	int x,y;
	
	//Accepting 1st and 2nd number from user
	cout<<"Enter your 1st number : ";
	cin>>x;
	
	cout<<"Enter your 2nd number : ";
	cin>>y;
	
	//Finding number is multiplied or not

	 if(y%x==0 || x%y==0){
		cout<<"Both are multiplied.";
	}
	
	else {
		cout<<"Numbers are not multiplied.";
	}
	
	return 0;
}
