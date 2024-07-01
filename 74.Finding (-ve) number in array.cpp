//QUESTION-->
//Write a C program that reads an array (length 7) and prints all array positions that store a value less than or equal to 0.

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int i,arr[7];
	
	//Accepting array elements
	for(i=0;i<7;i++){
		cout<<"Enter your ["<<i<<"] number : ";
		cin>>arr[i];
}

//printing -ve or 0 number and its position
for(i=0;i<7;i++){
		if(arr[i]<0 && arr[i]==0){
			cout<<"Array_num["<<i<<"]="<<arr[i];
		}
}
	return 0;
}
