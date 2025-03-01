//QUESTION->
//Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i;
	float series=0;

	//loop-1
	for(i=1;i<=50;i++){
		//calculation
		 series=series+(float)1/i;
	}
	//printing result
	cout<<series;
      
	return 0;
}
