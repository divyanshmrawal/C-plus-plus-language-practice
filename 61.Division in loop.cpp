//QUESTION-->
//Write a C program that accepts an integer from the user and divides all numbers between 1 and 100. Print those numbers where the remainder value is 3

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//X=user input
	int x,i;
	cout<<"Enter your number : ";
	cin>>x;
	
	cout<<"numbers where the remainder value is 3 : "<<"\n";
	
	for(i=1;i<=100;i++){
		if(x%i==3){
		cout<<i<<"\n";
		}
	}
	
	return 0;
}
