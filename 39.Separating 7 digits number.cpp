//QUESTION-->
//Write a C program that accepts a seven-digit number, separates the number into its individual digits, and prints the digits separated from one another by two spaces each

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	
	//Variable declaration
	int i,x,arr[7];
	
	//Accepting 7 digit number from user 
	cout<<"Enter your 7 digits number : ";
	cin>>x;
	
	//If condition is true then
	if(x<0 && x==0){
		//print it--
		cout<<"[Warning --> Number is not valid please enter Positive number]";
	}
	
	//Separating single digits form 7 digit number 
	
	//by taking (%) fumction and then it store in x
  else{
  	
  	arr[1]=x/1000000;
  	x=x%1000000;
  	
  	arr[2]=x/100000;
  	x=x%100000;
  
  	arr[3]=x/10000;
  	x=x%10000;
  	
  	arr[4]=x/1000;
  	x=x%1000;
  	
  	arr[5]=x/100;
  	x=x%100;
  	
  	arr[6]=x/10;
  	x=x%10;
  	
  	arr[7]=x/1;
  	x=x%1;
  	
  	
  }
  
  //Printing results --
  for(i=1;i<=7;i++){
  	cout<<"Seperated ("<<i<<") digits : "<<arr[i]<<"\n";
  }
    
	return 0;
}
