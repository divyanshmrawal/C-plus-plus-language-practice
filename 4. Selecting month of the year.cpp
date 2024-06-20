QUESTION -->Write a C program that reads an integer between 1 and 12 and prints the month of the year.

ANSWER -->
#include <iostream>
using namespace std;


int main() {
	//Accepting user-input
	int userinput;
	cout<<"Enter number of month : ";
	cin>>userinput;
	
	//Selecting monts on the base of user-input
	switch(userinput){
		case 1:
			cout<<"Name of month --> January";
		break;	
		
		case 2:
			cout<<"Name of month --> February";
		break;
		
		case 3:
			cout<<"Name of month --> March";
		break;
		
		case 4:
			cout<<"Name of month --> April";
		break;
		
		case 5:
			cout<<"Name of month --> May";
		break;
		
		case 6:
			cout<<"Name of month --> June";
		break;
		
		case 7:
			cout<<"Name of month --> July";
		break;
		
		case 8:
			cout<<"Name of month --> August";
		break;
		
		case 9:
			cout<<"Name of month --> September";
		break;
		
		case 10:
			cout<<"Name of month --> October";
		break;
		
		case 11:
			cout<<"Name of month --> November";
		break;
		
		case 12:
			cout<<"Name of month --> December";
		break;
	}
	
	return 0;
}
