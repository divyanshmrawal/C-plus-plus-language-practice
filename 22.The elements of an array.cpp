#include <iostream>

using namespace std;

int main() {
	int arr[100],i,size;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	for(i=0;i<size;i++){
		
		cout<<"Enter your number : ";
		cin>>arr[i];
		
		}
	
	cout<<"Number you entered : "<<"\n";
	for(i=0;i<size;i++){
		cout<<arr[i]<<"\n";
	}
	
	cout<<"Elements number : "<<"\n";
	for(i=0;i<size;i++){
		cout<<"n["<< i <<"]-->"<<arr[i]<<"\n";
	}
		
	return 0;
}
