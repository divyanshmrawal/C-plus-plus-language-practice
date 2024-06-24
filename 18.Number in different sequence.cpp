//QUESTION-->
 //Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration
	int x,y,i,j,b;
	
	//Accepting number of lines
	cout<<"Enter number of lines : ";
	cin>>x;
	
	//Accepting number of column
	cout<<"Enter number of column : ";
	cin>>y;
	
	//loop-1
	for(i=1,b=1;i<=x;i++){
		//loop-2
		for(j=1;j<=y;j++){
			cout<<b;
			b++;
		}
		cout<<"\n";
	}
	return 0;
}
