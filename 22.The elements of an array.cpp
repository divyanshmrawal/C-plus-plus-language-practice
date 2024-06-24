//QUESTION--> 
//Write a C program that reads and prints the elements of an array of length 7.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int arr[100],i,size;
	//Accpeting total number of values
	cout<<"Enter size of array : ";
	cin>>size;
	//loop-1
	for(i=0;i<size;i++){
		//Accepting numbers form user
		cout<<"Enter your number : ";
		cin>>arr[i];
		
		}
	//printing user input
	cout<<"Number you entered : "<<"\n";
	for(i=0;i<size;i++){
		cout<<arr[i]<<"\n";
	}
	//printing elements number
	cout<<"Elements number : "<<"\n";
	for(i=0;i<size;i++){
		cout<<"n["<< i <<"]-->"<<arr[i]<<"\n";
	}
		
	return 0;
}
