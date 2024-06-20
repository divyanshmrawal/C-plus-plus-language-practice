//QUESTION --> Write C program that reads 5 numbers and counts the number of positive numbers and negative numbers.

//ANSWER -->
#include <iostream>
using namespace std;

int main() {
	//Variable Declaration
	int arr[100] , i , size, positive=0 , negative=0;

	//Accepting size of array 
	cout<<"Enter size of the array : ";
	cin>>size;

	//loop-1
	for(i=0;i<size;i++){
		//Accepting numbers from user 
		cout<<"Enter your numbers : ";
		cin>>arr[i];
	
	//If first condition is true 
	if(arr[i]>0){
		//then count positive numbers
		positive=positive+1;
	}

	//If secound condition is true 	
	if(arr[i]<0){
		//Then count negative numbers
		negative=negative+1;
	}
}
	//Print Numbers of positive values
	cout<<"Numbers of positive values are : "<<positive <<"\n";
	//Print Numbers of negative values
	cout<<"Numbers of negative values are : "<<negative;

	return 0;
}
