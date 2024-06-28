//QUESTION-->
//Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number

//ANSWER-->
#include <iostream>
using namespace std;

int main() {
	//x=number of three in 7-digit number
	int i,size=7,arr[100],x=0;
	
	//Accepting 7-digits number
	for(i=1;i<=size;i++){
		cout<<"Enter "<<i <<"-digits number : ";
		cin>>arr[i];
	}
	
	//counting the number of 3s in the given number
	for(i=1;i<=7;i++){
		
		if(arr[i]==3){
		x=x+1;
		}
		
	}
	
	cout<<"---------------------------------------"<<"\n";
	
	//Printing result
	cout<<"Number of 3 value in 7-digit number : "<<x;
	
	return 0;
}
