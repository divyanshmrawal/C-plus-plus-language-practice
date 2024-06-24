//QUESTION-->
//Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//variables Declaration  
	int i,square,cube,n;

	//Accepting number of lines 
	cout<<"Enter number of lines : ";
	cin>>n;

	//loop-1
	for(i=1;i<n+1;i++){
		square=i*i;
		cube=i*i*i;
		cout<<i<<square<<cube<<"\n";
	}
	return 0;
}
