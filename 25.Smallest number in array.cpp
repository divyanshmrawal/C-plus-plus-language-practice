//QUESTION-->
// Write a C program to read an array of length 6 and find the smallest element and its position.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i,arr[100],size,x;
	//Accepting total number of values
	cout<<"Enter total number of values : ";
	cin>>size;
    //loop-1
	for(i=0;i<size;i++){
		
		cout<<"Enter your number : ";
		cin>>arr[i];
		//If condition
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	//Print result
	cout<<"n["<<i<<"]-->"<<arr[0];
	return 0;
}
