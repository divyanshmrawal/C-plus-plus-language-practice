//QUESTION-->
//Write a C program that finds all the divisors of an integer.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int userinput , i;
	//get an user input
	cout<<"Enter your number : ";
	cin>>userinput;
	        
    //loop-1
    cout<<"All divisors of userinput :"<<userinput<<"\n";
	for(i=1;i<=userinput;i++){
		//If condition is true then
		if((userinput%i)==0){
			//print it--
			cout<<""<<i<<"\n";
		}
		
	}
	return 0;
}
