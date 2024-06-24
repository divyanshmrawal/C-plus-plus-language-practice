//QUESTION-->
//Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int arr[100],i,size;
	
	//Accepting total number of value
	cout<<"Enter total number of value : ";
	cin>>size;
	
	//loop-1
	for(i=0;i<size;i++){
		//Accepting values of number
		cout<<"Enter your number : ";
		cin>>arr[i];
}
    //loop-2
    cout <<"Numbers which small than 5 : "<<"\n";
    for(i=0;i<size;i++){
    	//If condition is true then
		if(arr[i]<5){
			//print it--
		cout<<"n["<<i<<"]-->"<<arr[i]<<"\n";
	}
}		
	return 0;
}
