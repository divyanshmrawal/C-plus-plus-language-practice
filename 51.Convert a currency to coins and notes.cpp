#include <iostream>

using namespace std;

int main() {
	//x=user input currency,y=note of 100,z=number of 50 notes,b=number of 2 coins
	int x;
	cout<<"Enter value of Currency : ";
	cin>>x;
	
	int y=x/100;
	cout<<"number of 100 notes : "<<y<<"\n";
	
	int r1=x%100;
	
	int z=r1/50;
	cout<<"number of 50 notes : "<<z<<"\n";
	
	int r2=r1%50;
	
	int c=r2/5;
	cout<<"number of 5 coins : "<<c<<"\n";
	
	int r3=r2%5;
	
	int b=r3/2;
	cout<<"number of 2 coins : "<<b<<"\n";
	
	return 0;
}
