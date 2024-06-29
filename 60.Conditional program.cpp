#include <iostream>

using namespace std;

int main() {
	//variable declaration
	int x;
	
	//Accepting user input
	cout<<"Enter your number : ";
	cin>>x;
	
	if(x%2==0 && x>0){
		cout<<"Positive even Number.";
	}
	
	else if(x%2!=0 && x>0){
		cout<<"Positive odd Number.";
	}
	
	else if(x%2==0 && x<0){
		cout<<"Negative even number.";
	}
	
	else if(x%2!=0 && x<0){
		cout<<"Negative odd number.";
	}
	
	else if(x==0){
		cout<<"Number is zero.";
	}
	
	return 0;
}
