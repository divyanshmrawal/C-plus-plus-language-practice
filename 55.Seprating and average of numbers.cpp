//QUESTION-->
//Write a C program that accepts seven floating point numbers and counts the number of positive and negative numbers. Print the average of all positive and negative values with two digits after the decimal number

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration 
	float arr[7],positive=0,negative=0,sump=0,sumn=0;
	int i;
	
	//loop-1
	for(i=0;i<7;i++){
		cout<<"Enter your "<<i<<" number : ";
		cin>>arr[i];
	
	//Calculate sum of positive and negative numbers
	if(arr[i]>0){
		sump=sump+arr[i];
		positive=positive+1;
	}
	
	else if(arr[i]<0){
		sumn=sumn+arr[i];
		negative=negative+1;
	}
	
}
	//Printing positive and negative numbers
	cout<<"Number of positive values : "<<positive<<"\n";
	cout<<"Number of negative values : "<<negative<<"\n";

	//Calculating average and printing of positive numbers 
	int avgp=sump/positive;
	cout<<"Average of positive number : "<<avgp<<"\n";

        int avgn=sumn/negative;
	cout<<"Average of positive number : "<<avgn<<"\n";
	
	
	return 0;
}
