//QUESTION-->
//Write a C program using looping to produce the following table of values


//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
int x;

//printing notations
cout<<"x"<<"\t"<<"x+2"<<"\t"<<"x+4"<<"\t"<<"x+6\n";

//loop-1 
for(x=1;x<=15;x=x+3){
	//printing values
	cout<<x<<"\t" <<x+2<<"\t" <<x+4<<"\t" <<x+6<<"\n";
}
	return 0;
}
