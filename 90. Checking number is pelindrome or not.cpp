//QUESTION-->
//Write a c++ program to check number is pelindrome or not

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int userinput,result=0,remainder,q;
	
	//Accepting number from user 
	cout<<"Enter your number = ";
	cin>>userinput;
	
	//Calculation for checking number is pelindrome or not
	q=userinput;
	while(q!=0){
		remainder=q%10;
		result=result*10+remainder;
		q=q/10;
	}

//Printing result 
	if(result==userinput){
		cout<<"Yes,"<<result<<" is pelindrome.";
	}
	else{
		cout<<"No,"<<result<<"is not a pelindrome.";
	}
	
	return 0;
}
