//QUESTION-->
//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i,j;
	 //Loop-1
	for(i=1;i<=10;i++){
		cout<<"\n";
		//loop-2
		for(j=1;j<=10;j++){
			//Printing square with the help of hash
			cout<<"#";
		}
	}
	return 0;
}
