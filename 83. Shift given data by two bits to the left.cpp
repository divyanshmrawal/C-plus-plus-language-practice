//QUESTION-->
//Write a C program to shift given data by two bits to the left

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int userinput;
	//Accepting userinput from user
	cout<<"Enter your number : ";
	cin>>userinput;
	
	//printing original number
	cout<<"Your entered number : "<<userinput<<"\n";
	
	//Shifting userinput by 2 bit towards left
	int shiftnum=userinput<<=2;
	
	//prining shifted number
	cout<<"Shifted number : "<<shiftnum;
	
	return 0;
}
