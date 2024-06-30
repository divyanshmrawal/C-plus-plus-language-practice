//QUESTION-->
//Write a C program that accepts a pair of numbers from the user and prints "Ascending order" if the two numbers are in ascending order, otherwise prints, "Descending order"

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable diclaration
	int x1,x2;
	
	//Accepting value of numbers in pairs
	cout<<"Enter 1st number : ";
	cin>>x1;
	
	cout<<"Enter 2nd number : ";
	cin>>x2;
	
	//presenting entered pair
	cout<<"Entered pair :"<<x1<<","<<x2;
	
	cout<<"\n";
	
	//Checking order of pair
	if(x1>x2){
		cout<<"Order of pair : "<<"Descending order";
	}
	
   else	if(x2>x1){
		cout<<"Order of pair : Ascending order";
	}
	
	return 0;
}
