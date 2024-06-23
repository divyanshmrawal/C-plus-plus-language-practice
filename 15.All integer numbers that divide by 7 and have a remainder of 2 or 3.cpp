
//QUESTION-->
//Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.

//ANSWER->>
#include <iostream>

using namespace std;

int main() {
	//Variable decelaration
	int firstnum,secoundnum,i,sum=0;
	
				//Accepting first number
	   cout<<"Enter your first number : ";
	   cin>>firstnum;
	
	        //Accepting secound number
        cout<<"Enter your secound number : ";
	    cin>>secoundnum;
	    
	
	for(i=firstnum;i<=secoundnum;i++){
		
			if((i%7)==2 || (i%7)==3){
			cout<<i<<"\n";
		}
		
	}
	return 0;
}

