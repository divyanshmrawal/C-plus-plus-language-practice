//QUESTION-->
//Write a c program to swip 2 numbers

//ANSWER-->
#include <iostream>

using namespace std;
int main() {
	//Creating array
	int arr[5]={1,2,3,4,5};
	
	//printing numbers without swaping
	int b;
	cout<<"number without swap = ";
	for(b=0;b<5;b++){
		cout<<arr[b];
	}
	cout<<"\n";
	
	//Creating variable
	int temp,k;
	
	int i=2,j=1;
	
	//Swaping numbers
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	
	//printing swaped numbers
	cout<<"swaped number = ";
	for(k=0;k<5;k++){
		cout<<arr[k];
	}
	return 0;
}
