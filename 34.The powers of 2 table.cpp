//QUESTION-->
//Write a C program that prints the powers of 2 table for the powers 0 to 10, both positive and negative.

//ANSWER-->
#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int i;
	//loop-1
	for(i=0;i<=10;i++){
		//printing result
		cout<<i<<"\t"<<"Positive pawer of 2 -->"<<pow(2,i)<<"\t"<<"Negative power of 2 -->"<<pow(2,-i)<<"\t"<<"\n";
}	
	return 0;
}
