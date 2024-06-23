//QUESTION -->
//Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.

//ANSWER -->
#include <iostream>

using namespace std;

int main() {
int i,arr[100],start,end,sum=0 , list;

cout<<"Enter your starting number : ";
cin>>start;

cout<<"Enter your ending number : ";
cin>>end;


for(i=start;i<=end;i++){
		
	cout<<"Enter your number : ";
	cin>>arr[i];
	
   if((arr[i]%2) != 0){
   
   sum=sum+arr[i];
   	
}

}

cout<<"sum of all odd number : "<<sum<<"\n";

	return 0;
}
