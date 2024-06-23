#include <iostream>

using namespace std;

int main() {	
   int i,password[100];
   for(i=0;i<5;i++){
   	cout<<"Enter your password : ";
   	cin>>password[i];
   	
   	
   	if(password[i]==1234){
   		cout<<"Correct password"<<"\n";
   		return 0;
	   }
	   
	   else{
	   	cout<<"wrong password"<<"\n";
	   	
	   }
   }
   
	return 0;
}
