//QUESTION-->
//Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second //position.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	
	int i,arr[7],sum;
	//Accepting first number 
	cout<<"Enter your first number : ";
	cin>>sum;

	//loop-1
	for(i=0;i<7;i++){
		//Calculation
		arr[i]=sum;
		sum=sum*3;
	}

	//printing result
	for(i=0;i<7;i++){
		cout<<"n["<<i<<"]-->"<<arr[i]<<"\n";
	}
	return 0;
}
