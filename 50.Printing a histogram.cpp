//QUESTION-->
//Write a C program that takes some integer values from the user and prints a histogram

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x=number of line
	//Variable declaration
	int x,i,arr[100],k;
	
	//Accepting total number of line
	cout<<"Enter number of total line : ";
	cin>>x;
	
	//Accepting number for histogram
	for(i=0;i<x;i++){
	cout<<"Enter your number : ";
	cin>>arr[i];	
	}
	
	//heading of histogram
	cout<<"Histogram : ";
	
	//Printing histogram
	for(i=0;i<x;i++){	
	  cout<<"\n";
	   for(k=0;k<arr[i];k++){
	   cout<<"#";	
	}
	
	}
	return 0;
}
