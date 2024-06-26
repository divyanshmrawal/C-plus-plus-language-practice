//QUESTION-->
//Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x=userinput last number
	float i,x,sum=0;
	
	//Accepting last number from user 
	cout<<"Enter last number : ";
	cin>>x;

	//loop-1
	for(i=1;i<=x;i++){
		//Sum of series
		sum=sum+(1/i);
	}

	//printing result
	cout<<"sum of series : "<<sum;
	return 0;
}
