//QUESTION-->
//Write a C-program to find max and min number in array

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i,size,arr[100],sum,x,y;
	//Accepting total numbers of values
	cout<<"Enter total number of values : ";
	cin>>size;
	//loop-1
	for(i=0;i<size;i++){
		//Accepting number from user
		cout<<"Enter your number : ";
		cin>>arr[i];
		//Printing smallest number in array
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
			x=arr[i];
		    arr[0]=x;
		}
	}
		cout<<"Smallest number :"<<arr[0]<<"\n";
		
		//Printing largest number in array
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
