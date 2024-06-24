//QUESTION-->
//Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration
	int i,arr[100];
	float average,size,sum=0;
	//Accepting number of subjects
	cout<<"Enter number of subjects : ";
	cin>>size;
	
	//loop-1
	for(i=1;i<=size;i++){
		
		//Accepting number of marks
		cout<<"Enter your marks : ";
		cin>>arr[i];
		
		//sum of all elements of array
		sum=sum+arr[i];
		
		if(arr[i]<0 && arr[i]==0){
			return 0;
		}
	}
	
	//Finding average
	average=sum/size;
	
	//printing average result
	cout<<"Average of your marks : "<<average;
	
	return 0;
}
