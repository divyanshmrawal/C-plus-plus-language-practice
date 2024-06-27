//QUESTION-->
// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character

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
			if(i==1 || i==10){
				cout<<"#";
			}
			
			else if(j==0 || j==10){
				cout<<"#";
			}
			
			else{
				cout<<"_";
			}
		}
	}
	return 0;
}
