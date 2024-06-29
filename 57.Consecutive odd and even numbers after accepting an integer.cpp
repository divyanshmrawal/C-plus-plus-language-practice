//QUESTION-->
//Write a C program that prints ten consecutive odd and even numbers after accepting an integer

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//x=user input 
	
	//variable declaration
	int x,i,j=i-1,sume=0,sumo=0;
	
	//Accepting 
	cout<<"Enter your number : ";
	cin>>x;
	
	cout<<"Even numbers : ";
	for(i=x;i<x+20;i++){
		if(i%2==0){
			 sume=i;
			 cout<<sume<<",";
		}
	}
	
	cout<<"\n";
	
	cout<<"Odd numbers : ";
	for(i=x;i<x+20;i++){
     if((i%2)!=0){
	   sumo=i;
	   cout<<sumo<<",";
	}
}
	
	return 0;
}
