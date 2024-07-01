//QUESTION-->
//Write a C program to create an array of length n and fill the array elements with integer values. Find the smallest value and its position in the array

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int size , i ,arr[100],x;
	
	//Accepting number from user
	cout<<"Enter total number of values : ";
	cin>>size;
	
	//Findin smallest value in array
	for(i=1;i<=size;i++){
		cout<<"Enter your number : ";
		cin>>arr[i];
		
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
			x=i;
		}
		
	}
	  //printing smallest value and it's position
	  cout<<"Smallest value in array : "<<arr[0]; 
	  cout<<"position of smallest value : "<<x;
	return 0;
}
