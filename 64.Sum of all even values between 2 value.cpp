//QUESTION-->
//Write a C program that accepts two integer values and calculates the sum of all even values between them

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration 
	int st,en,i,sum=0;

	//Accepting numbers from user 
	cout<<"Enter starting number : ";
	cin>>st;
	
	cout<<"Enter last number : ";
	cin>>en;

	//Sum of all even numbers between 2 numbers
	if(st<en){
		
	for(i=st;i<en;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	//printing result
	cout<<"Sum of even number is : "<<sum;
}

else{
	cout<<"Enter a valid number.";
}
	return 0;
}
