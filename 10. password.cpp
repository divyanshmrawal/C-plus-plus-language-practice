//QUESTION -->
//Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
   //variable deceleration 
   int i,password[100];
	//loop-1
   for(i=0;i<5;i++){
   	cout<<"Enter your password : ";
   	cin>>password[i];
   	
   	//If condition is true
   	if(password[i]==1234){
		//then print
   		cout<<"Correct password"<<"\n";
   		return 0;
	   }
	   
	   else{
		  // otherwise
	   	cout<<"wrong password"<<"\n";
	   	
	   }
   }
   
	return 0;
}
