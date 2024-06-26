#include <iostream>

using namespace std;

int main() {
	//x=userinput last number
	
	float i,x,sum=0;
	
	cout<<"Enter last number : ";
	cin>>x;
	
	for(i=1;i<=x;i++){
		sum=sum+(1/i);
	}
	
	cout<<"sum of series : "<<sum;
	return 0;
}
