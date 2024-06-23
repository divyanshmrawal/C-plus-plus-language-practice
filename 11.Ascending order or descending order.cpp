//QUESTION-->
//Write a C program to check if two numbers in a pair are in ascending order or descending order

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//variable declaration
	int arr[2],i;
      //loop-1
	for(i=1;i<=2;i++){
		//Accepting numbers
	cout<<"Enter your " << i <<" number : ";
	cin>>arr[i];
}
    //If condition is true 
	if(arr[1]<arr[2]){
		//then print -
		cout<<"Ascending order";
	}
	
	 //If condition is true 
	if(arr[1]>arr[2]){
		//then print -
		cout<<"Descending order";
	}
	
	return 0;
}

