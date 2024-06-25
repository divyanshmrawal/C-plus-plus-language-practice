//QUESTION-->
// Write a C program to create enumerated data types for 7 days and display their values in integer constants

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i;
	//Names of weeks
	string str[100]= {"Sunday","Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
	//loop-1
	for(i=0;i<7;i++){
		//printing result
		cout<<str[i]<<"-->"<<i<<"\n";
	}

	return 0;
}
