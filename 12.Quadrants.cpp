//QUESTION-->
//Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable decelaration
	int arr[2],i;
	//loop-1
	for(i=1;i<=2;i++){
		//Accepting numbers
		cout<<"Enter your "<<i<<" number : ";
		cin>>arr[i];
	}
		
		//1-Quadrant
		
		if(arr[1]>0 && arr[2]>0){
			cout<<"First-Quadrant";
		}
		
	
			//2-Quadrant
		if(arr[1]<0 && arr[2]>0){
			cout<<"Secound-Quadrant";
		}
		
			//3-Quadrant
		if(arr[1]<0 && arr[2]<0){
			cout<<"Third-Quadrant";
		}
		
			//4-Quadrant
		if(arr[i]>0 && arr[2]<0){
			cout<<"Forth-Quadrant";
			
			return 0;
		}
	
	return 0;
}
