//QUESTION-->
//Write a C program to create and print the sequence of the following example

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int ai=0,bi=0;
	
	//Printing sequence
	for(ai=1,bi=100 ; ai<60,bi>=0 ; ai+=5,bi-=10){
		cout<<"a="<<ai <<"\t"<< "b="<<bi<<"\n";
	}
	return 0;
}
