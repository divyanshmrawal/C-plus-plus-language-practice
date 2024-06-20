#include <iostream>
using namespace std;

int main() {
	int arr[100] , i , size , sum=0 , positivenum , average;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	for(i=0;i<size;i++){
		cout<<"Enter your number : ";
		cin>>arr[i];
		

	
	if(arr[i]>0){
		positivenum=positivenum+1;
		sum=sum+arr[i];
	}
}

	average=sum/positivenum;
	cout<<"Number of positive values : " <<positivenum <<"\n";
	cout<<"Average of positive numbers : "<<average;
	
	return 0;
}
