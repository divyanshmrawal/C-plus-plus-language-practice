//QUESTION-->
//Write a C program to display the sizes and ranges for each of C's data types

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	char x;
	int i;
	double d;
	float f;
	bool b;
	//printing heading
	cout<<"NAME  : "<<"\t"<<"SIZE"<<"\n";
	cout<<"---------------------"<<"\n";
	
	//printing name and size of variables
	cout<<"char  : "<<"\t"<<sizeof(x)<<"\n";
	cout<<"int   : "<<"\t"<<sizeof(i)<<"\n";
	cout<<"double: "<<"\t"<<sizeof(d)<<"\n";
	cout<<"float : "<<"\t"<<sizeof(f)<<"\n";
	cout<<"bool : "<<"\t"<<sizeof(b)<<"\n";
	
	return 0;
}
