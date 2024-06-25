#include <iostream>

using namespace std;

int main() {
	int i,size,arr[100],sum,x,y;
	
	cout<<"Enter total number of values : ";
	cin>>size;
	
	for(i=0;i<size;i++){
		
		cout<<"Enter your number : ";
		cin>>arr[i];
		
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
			x=arr[i];
		    arr[0]=x;
		}
	}
		cout<<"Smallest number :"<<arr[0]<<"\n";
		
		
		for(i=0;i<size;i++){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
			y=arr[i];
			arr[0]=y;
		}
	}
		cout<<"largest number :"<<y<<"\n";
		
	return 0;
}
