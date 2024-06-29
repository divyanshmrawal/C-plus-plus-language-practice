#include <iostream>

using namespace std;

int main() {
int x,positive=0,negative=0,even=0,odd=0;
	int i;
	
	for(i=0;i<7;i++){
		cout<<"Enter your "<<i<<" number : ";
		cin>>x;
	
	
	if(x>0){
		positive=positive+1;
	}
	
	
	 if(x<0){
		negative=negative+1;
	}
	
	if((x%2)==0){
	  even=even+1;
	}
	
	 if((x%2)!=0){
		odd=odd+1;
	}
	
}
	cout<<"Number of positive values : "<<positive<<"\n";
	cout<<"Number of negative values : "<<negative<<"\n";
	cout<<"Number of even values : "<<even<<"\n";
	cout<<"Number of odd values : "<<odd<<"\n";
	
	return 0;
}
