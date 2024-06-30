//QUESTION-->
//Write a C program that reads an integer and finds all the divisors of the said integer

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x=user input
	int x,i;
	
	//Accepting userinput
	cout<<"Enter your number : ";
	cin>>x;
	
	cout<<"Divisor of userinput :-- "<<"\n";
	
	//printing all divisor of input number
	for(i=1;i<=x;i++){
		if(x%i==0){
			cout<<i<<"\n";
		}
	}
	return 0;
}
