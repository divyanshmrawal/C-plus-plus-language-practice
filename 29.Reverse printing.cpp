//QUESTION-->
//Write a C program to reverse and print a given number

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int arr[100],size,i;
	//Accepting size of the array
	cout<<"Enter size of array : ";
	cin>>size;
	
	//loop-1
	for(i=0;i<size;i++){
		//Accepting number
		cout<<"Enter your number : ";
		cin>>arr[i];
	
	}
   
   //printing simple order
   	cout<<"number in simple order : ";
    for(i=0;i<size;i++){
   	cout<<arr[i];
   }
   
	cout<<"\n";
	
	//printing reverse order
	cout<<"number in reverse order : ";
	for(i=size;i>=0;i--){
		cout<<arr[i];
	}
	return 0;
}
