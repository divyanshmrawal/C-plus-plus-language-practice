#include <iostream>

using namespace std;

int main() {
	int i,arr[7],sum;
	cout<<"Enter your first number : ";
	cin>>sum;
	
	for(i=0;i<7;i++){
		arr[i]=sum;
		sum=sum*3;
	}
	
	for(i=0;i<7;i++){
		cout<<"n["<<i<<"]-->"<<arr[i]<<"\n";
	}
	return 0;
}
