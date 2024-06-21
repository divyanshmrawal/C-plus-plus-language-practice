//QUESTION -->Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.

//ANSWER -->
#include <iostream>
using namespace std;

int main() {
	//Variables Declaration
	int arr[100] , i , size , sum=0 , positivenum , average;
	
	//Accepting size of array
	cout<<"Enter size of array : ";
	cin>>size;

	//loop-1
	for(i=0;i<size;i++){
		//Accepting numbers 
		cout<<"Enter your number : ";
		cin>>arr[i];
		
	//If both condition is true 
	if(arr[i]>0){
		positivenum=positivenum+1;
		sum=sum+arr[i];
	}
}
//then calculate average of positive numbers
	average=sum/positivenum;
	
	//and print total number of positive values
	cout<<"Number of positive values : " <<positivenum <<"\n";
	
	//and print average values of positive numbers 
	cout<<"Average of positive numbers : "<<average;
	
	return 0;
}
