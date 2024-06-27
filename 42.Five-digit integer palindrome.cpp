#include <iostream>

using namespace std;

int main() {
	
	int arr[5],i;
	
cout<<"Enter 1-digit number : ";
cin>>arr[0];

cout<<"Enter 2-digit number : ";
cin>>arr[1];

cout<<"Enter 3-digit number : ";
cin>>arr[2];

cout<<"Enter 4-digit number : ";
cin>>arr[3];

cout<<"Enter 5-digit number : ";
cin>>arr[4];


	
	if(arr[0]==arr[4-0] && arr[1]==arr[4-1] && arr[2]==arr[4-2]){
		cout<<"number is palindrome. ";
	}
	else{
		cout<<"not a palindrome.";
	}

	
		return 0;
}
