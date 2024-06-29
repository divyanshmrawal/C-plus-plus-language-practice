#include <iostream>

using namespace std;

int main() {
	//X=user input
	int x,i;
	cout<<"Enter your number : ";
	cin>>x;
	
	cout<<"numbers where the remainder value is 3 : "<<"\n";
	
	for(i=1;i<=100;i++){
		if(x%i==3){
		cout<<i<<"\n";
		}
	}
	
	return 0;
}
