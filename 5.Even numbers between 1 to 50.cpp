//QUESTION --> Write a C program that prints all even numbers between 1 and 50 .

//ANSWER -->
#include <iostream>

using namespace std;

int main() {
	//Variable Declaration
	int i;
	
	cout<<"All even numbers between 1 to 50 --> ";
	
	//Loop-1
	for(i=1;i<=50;i++){
		//If condition is true
		if (i%2==0){
			//then print the number
			cout<<i<<",";
		}
	}
	return 0;
}
