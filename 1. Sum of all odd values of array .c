//QUESTION:--
//Write a C program that reads 5 numbers and sums all odd values between them

//ANSWER:--
#include <iostream>
using namespace std;


int main() {
//Creating different variables
int arr[100],i,size,sum=0;

	//Accepting size of array
        cout<<"Enter array's size : ";
	cin>>size ;
	
	cout<<"\n";
	
	//Creating loop-1
	for(i=0;i<size;i++){
		
		//Accepting elements's values
		cout<<"Enter elements's value : ";
		cin>>arr[i];
		
		//Adding all odd numbers in array
		if(arr[i]%2!=0){
			sum=sum+arr[i];
		}
		
	}
	
	//Printing result 
	cout<<"Sum of all odd number : ";
	cout<<sum;
	
	return 0;
}
