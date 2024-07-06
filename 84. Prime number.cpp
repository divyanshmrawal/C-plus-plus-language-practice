//QUESTION-->
//Write a C-program to check number is prime or not

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int userinput;
	
	//Accepting userinput number form user
	cout<<"Enter your number : ";
	cin>>userinput;
	
	cout<<"=============================="<<"\n";
	
	//Checking number is prime or not and printing result
	int count;
	for(count=2;count<userinput;count++){
		
		if(userinput%count!=0){
			cout<<"Number is prime.";
			break;
		}
		
		else{
			cout<<"Number is non-prime.";
			break;
		}
	
    }
	
	return 0;
}
