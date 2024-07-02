//QUESTION-->
// Write a C program to calculate the sum of two given integers and count the number of digits in the sum value

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int x,y,sum,p=0;
	
	//Accepting numbers from user
	cout<<"Enter your 1st number : ";
	cin>>x;
	
	cout<<"Enter your 2nd number : ";
	cin>>y;
	
	//Sum of two numbers
	sum=x+y;
	cout<<"sum of two numbers : "<<sum<<"\n";
	//Finding digits of resulting value

while(sum!=0){
	
	if(sum>0){
		 
  sum=sum/10;
}
  p++;
  
  
}

//printing result 
cout<<"total digits of resulting value : "<<p;
	return 0;
}
