//QUESTION-->
// C program to find and print the square of each even and odd value between 1 and a given number

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Vairable declaration
	int en;
	
	//Accepting number
	cout<<"Enter your number : ";
	cin>>en;
	
	
	int i,sqe=0,sqo=0;
	
	//printing square of even numbers 
	for(i=1;i<=en;i++){
		
		if(i%2==0){
			sqe=i*i;
			cout<<i<<"^2="<<sqe<<"\n";
		}
	}
	
	cout<<"\n";
	
	//printing square of odd numbers 
	for(i=1;i<=en;i++){
		
			if(i%2!=0){
			sqo=i*i;
			cout<<i<<"^2="<<sqo<<"\n";
		}
	}
	
	return 0;
}
