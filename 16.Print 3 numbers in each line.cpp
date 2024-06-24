//QUESTION-->
//Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	
	int i,userinput,j=1,x=0;
	//Accepting userinput
	cout<<"Enter your user input : ";
	cin>>userinput;
	//loop-1
	for(i=1;i<=userinput;i++){
		//loop-2
		 while(x < 3) {
            cout<<j++;
            x++;
        }
		x=0;
		cout<<"\n";
	}
	return 0;
}
