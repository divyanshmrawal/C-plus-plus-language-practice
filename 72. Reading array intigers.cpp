//QUESTION-->
// Write a C program that reads an array of integers (length 7), replaces every negative or null element with 1 and prints the array elements

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int i,arr[7];
	
	//Accepting number from user
	for(i=1;i<=7;i++){
		cout<<"Enter your "<<i<<" number : ";
		cin>>arr[i];
		
		if(arr[i]<0 || arr[i]==0){
			arr[i]=1;
		}
		
	}
	
	cout<<"Array elements :--"<<"\n";
	
	//printing values of number 
	for(i=1;i<=7;i++){
		cout<<"Array_elements_["<<i<<"]="<<arr[i]<<"\n";
	}
	return 0;
}
