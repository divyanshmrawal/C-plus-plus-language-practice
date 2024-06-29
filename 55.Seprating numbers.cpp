#include <iostream>

using namespace std;

int main() {
	float arr[7],positive=0,negative=0,sump=0,sumn=0;
	int i;
	for(i=0;i<7;i++){
		cout<<"Enter your "<<i<<" number : ";
		cin>>arr[i];
	
	
	if(arr[i]>0){
		sump=sump+arr[i];
		positive=positive+1;
	}
	
	
	else if(arr[i]<0){
		sumn=sumn+arr[i];
		negative=negative+1;
	}
	
}
	cout<<"Number of positive values : "<<positive<<"\n";
	cout<<"Number of negative values : "<<negative<<"\n";
	
	int avgp=sump/positive;
	cout<<"Average of positive number : "<<avgp<<"\n";

    int avgn=sumn/negative;
	cout<<"Average of positive number : "<<avgn<<"\n";
	
	
	return 0;
}
