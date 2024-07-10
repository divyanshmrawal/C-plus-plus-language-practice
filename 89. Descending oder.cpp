//QUESTION-->
//Write a c++ program which prints values of number in descending order

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int i,arr[100],size;
	
	//Accepting total number of values entered by user
	cout<<"Enter total number of values = ";
	cin>>size;
	
	//Accepting numbers by user
	cout<<"Enter your number :-- "<<endl;
	
	for(i=0 ; i<size ; i++){
		cin>>arr[i];
	}
  
  int j,x;
  
  //Arranging number of values in descending value
    for(i=0;i<size;i++){
    	for(j=i+1;j<size;j++){
    		if(arr[i]<arr[j]){
    			x=arr[i];
    			arr[i]=arr[j];
    			arr[j]=x;
			}
		}
	}
	
	//printing values in descending order
	cout<<"Number in descending order = ";
	for(i=0;i<size;i++){
		cout<<arr[i];
	}
	return 0;
}
