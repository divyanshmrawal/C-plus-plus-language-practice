#include <iostream>

using namespace std;

int main() {
	int st,en,i,sum=0;
	
	cout<<"Enter starting number : ";
	cin>>st;
	
	cout<<"Enter last number : ";
	cin>>en;
	
	if(st<en){
		
	for(i=st;i<en;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	cout<<"Sum of even number is : "<<sum;
}

else{
	cout<<"Enter a valid number.";
}
	return 0;
}
