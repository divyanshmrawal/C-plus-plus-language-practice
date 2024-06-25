#include <iostream>

using namespace std;

int main() {
	int x,y,z,b,max,min,sum;
	
	cout<<"Enter your 1 number : ";
	cin>>x;

	cout<<"Enter your 2 number : ";
	cin>>y;
	
	cout<<"Enter your 3 number : ";
	cin>>z;
	
	cout<<"Enter your 4 number : ";
	cin>>b;
	
	//Finding largest number
	if(x>y && x>z && x>b){
		max=x;
	}
	
	if(y>x && y>z && y>b){
		max=y;
	}
	
	if(z>y && z>x && z>b){
		max=z;
	}
	
	if(b>y && b>z && b>y){
		max=b;
	}
	
	//Finding smallest number
	
	if(x<y && x<z && x<b){
		min=x;
	}
	
		if(y<x && y<z && y<b){
		min=y;
	}
	
		if(z<y && z<x && z<b){
		min=z;
	}
	
		if(b<y && b<z && b<x){
		min=b;
	}
	
	//Calculation
  sum=max-min;
  //printing number
  cout<<"difference between the maximum and minimum values of these four numbers : "<<sum;
	return 0;
}
