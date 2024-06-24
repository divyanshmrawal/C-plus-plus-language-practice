#include <iostream>

using namespace std;

int main() {
	int i,arr[100],size,x;
	
	cout<<"Enter total number of values : ";
	cin>>size;
	
	
	
	for(i=0;i<size;i++){
		
		cout<<"Enter your number : ";
		cin>>arr[i];
		
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	
	cout<<"n["<<i<<"]-->"<<arr[0];
	return 0;
}
