#include <iostream>

using namespace std;

int main() {
	//x= 1st number,y=2nd number,z =3rd number
	int x,y,z;
	
	cout<<"Enter your 1st number : ";
	cin>>x;
	
	cout<<"Enter your 2nd number : ";
	cin>>y;
	
	cout<<"Enter your 3rd number : ";
	cin>>z;
	
	if(x>y && y>z){
	cout<<"z,y,x";
	}
	
  else if(y>x && x>z){
		cout<<"z,x,y";
	}
	
	else if(z>x && x>y)
	{
		cout<<"y,x,z";
	}
	
	else if(z>y && y>x){
		cout<<"x,y,z";
	}
	
	return 0;
}
