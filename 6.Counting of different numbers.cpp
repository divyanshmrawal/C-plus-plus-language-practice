#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[100] , i , size, positive=0 , negative=0;
	
	cout<<"Enter size of the array : ";
	cin>>size;
	
	for(i=0;i<size;i++){
		cout<<"Enter your numbers : ";
		cin>>arr[i];
	
	
	if(arr[i]>0){
		positive=positive+1;
	}
	
	if(arr[i]<0){
		negative=negative+1;
	}
}
	cout<<"Numbers of positive values are : "<<positive <<"\n";
	
	cout<<"Numbers of negative values are : "<<negative;

	return 0;
}
