//QUESTION-->
// Write a C program that reads seven integer values from the user and finds the highest value and its position

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variables declaration 
	int i,x,p,m;

	//Accpting number from user
	cout<<"Enter your number : ";

	//calculating maximum value and it's position 
	 for(i=1;i<7;i++){
	 	cin>>x;
	 	
	 	if(x>=m){
	 		m=x;
	 		p=i;
		 }
	 }

	//printing max value and position
	 cout<<"Maximum value : "<<m<<"\n";
	 cout<<"Position of value : "<<p<<"\n";
	 
	return 0;
}
