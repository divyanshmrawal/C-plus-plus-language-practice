#include <iostream>

using namespace std;

int multiplied(int x , int y){
	return x%y==0;
}

int main() {
	int x,y;
	
   cout<<"Enter your first number : ";
   cin>>x;
   
   cout<<"Enter your secound number : ";
   cin>>y;
   
   if(multiplied(x,y)){
   	cout<<"Yes, "<<x<<" is multiple of "<<y;
   }
   else{
   	cout<<"No, "<<x<<" is not multiple of "<<y;
   }
	return 0;
}
