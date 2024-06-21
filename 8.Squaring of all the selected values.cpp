#include <iostream>

using namespace std;

int main() {
	int i , size , arr[100];
	
	cout<<"Enter number of maximum values --> ";
	cin>>size;
	
	for(i=1;i<=size;i++){
		cout<<"Enter your number --> ";
		cin>>arr[i];
		
		
		if(arr[i]%2==0){
			cout<<"Square even number -->" <<arr[i]*arr[i] <<"\n";
		}
	}
	return 0;
}
