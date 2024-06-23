//QUESTION-->
//Write a C program to find and print the square of all the even values from 1 to a specified value.
	
//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Creating variables
	int i , size , arr[100];

	//Accepting size of the array
	cout<<"Enter number of maximum values --> ";
	cin>>size;

	//loop-1
	for(i=1;i<=size;i++){
		//Accepting numbers 
		cout<<"Enter your number --> ";
		cin>>arr[i];
		
		//If condition is ture 
		if(arr[i]%2==0){
			//then print square of the even numbers
			cout<<"Square even number -->" <<arr[i]*arr[i] <<"\n";
		}
	}
	return 0;
}
