//QUESTION-->
//Write a C program that accepts a pair of numbers from the user and prints the sequence from the lowest to the highest number. Also, print the average value of the sequence

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration
	int n1,n2,i,j;
	
	float sum=0,avg,length=0;
	
	//Accepting numbers from user
	cout<<"Enter number-1 : ";
	cin>>n1;
	
	cout<<"Enter number-2 : ";
	cin>>n2;
	
	//Calculating average and printing number in ascending number
	if(n1<n2){
		for(i=n1;i<=n2;i++){
			cout<<","<<i;
			sum=sum+i;
			length=length+1;
		}
		
	
	
	cout<<"\n";
	
	avg=(float)sum/length;
	cout<<"Average of numbers : "<<avg;}
	
    if(n2<n1){
		for(i=n2;i<n1;i++){
			cout<<","<<i<<"\n";
			sum=sum+i;
			length=length+1;
		}
	
	
	cout<<"\n";
	
	avg=sum/length;
	//printing average
	cout<<"Average of numbers : "<<avg;}
	return 0;
}
