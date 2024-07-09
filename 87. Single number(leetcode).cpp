//QUESTION-->
//Given a non-empty array of integers nums. every elements appears twice axcept for one. Find that single one.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
int i,size,arr[100];
int x=0;

//Accepting total numbers of value from user
cout<<"Enter total numbers of value = ";
cin>>size;

//Accepting number from user
cout<<"Enter your number = ";

for(i=0;i<size;i++){
	cin>>arr[i];
	
	x=x^arr[i];
}

//Printing single number in array
cout<<"Single_number = "<<x;

	return 0;
}
