//QUESTION-->
//Write a C program that reads an array of integers (length 7), and replaces the first element of the array by a given number and replaces each subsequent position of the array by the double value of the previous

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int i,arr[7];
	
	//Accepting number from user
	cout<<"Enter your number : "<<"\n";
	cin>>arr[0];
	
	cout<<"Array elements : "<<"\n";
	cout<<"Array_num [0]"<<"="<<arr[0]<<"\n";
	
	//Calculating array elements
	for(i=1;i<7;i++){
		 arr[i]=arr[i-1]*2;
		 cout<<"Array_num["<<i<<"]="<<arr[i]<<"\n";
	}
	return 0;
}
