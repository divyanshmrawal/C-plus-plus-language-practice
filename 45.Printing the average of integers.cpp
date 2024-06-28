//QUESTION-->
//Write a C program to calculate and print the average of some integers. Accept all the values preceding 888

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration 
	int i,sum=0,inc=0;
	float avg=0;

	//Accepting number form user
   cout<<"Enter your number : ";
   cin>>i;
	//Calculating sum and total number of values
		while(i!=888){
		sum=sum+i;
		inc++;
		cin>>i;
		}

	//Calculating numbers
	avg=(float)sum/inc;

	//Printing avg value
	cout<<"Average of numbers : "<<avg;
	return 0;
}
