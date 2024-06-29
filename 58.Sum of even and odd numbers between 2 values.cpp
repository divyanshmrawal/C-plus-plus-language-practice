//QUESTION-->
//Write a C program that reads two integer values and calculates the sum of all odd numbers between them

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int st,en;
	int i,sumo=0,sume=0;
	
	cout<<"Enter your 1st number : ";
	cin>>st;
	
	cout<<"Enter your 2nd number : ";
	cin>>en;
	
  for(i=st;i<=en;i++){
  	
  	if((i%2)!=0){
  		sumo=sumo+i;
	  }
	  
	  if((i%2)==0){
	  	sume=sume+i;
	  }
  	
  }
  
  cout<<"Sum of all odd numbers : "<<sumo<<"\n";
  cout<<"Sum of all even numbers : "<<sume<<"\n";
  
   return 0;
}
