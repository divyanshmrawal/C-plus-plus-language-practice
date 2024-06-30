//QUESTION-->
//Write a C program to calculate the sum of all numbers between two given numbers (inclusive) not divisible by 7

//ANSWER-->
#include <iostream>

using namespace std;
int main() {
	int n1,n2,i,sum;
	
	cout<<"Enter your 1st number (which is smaller than 2nd number): ";
	cin>>n1;
	
	cout<<"Enter your 2nd number : ";
	cin>>n2;
	
	if(n1<n2){
	for(i=n1;i<=n2;i++){
		if(i%7!=0){
			sum=sum+i;
		}
	}
	cout<<"Sum of numbers which are not divisible from 7 : " <<sum-1;
}
	return 0;
}
