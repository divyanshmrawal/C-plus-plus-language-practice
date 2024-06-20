#include <iostream>
using namespace std;


int main() {
	//Accepting 3 values of points in triangle
	
	//value-1
	int num1;
    cout<<"Enter your first number : ";
    //Saving user-input
	cin>>num1;
	
		int num2;
    cout<<"Enter your secound number : ";
    //Saving user-input
	cin>>num2;
	
		int num3;
    cout<<"Enter your third number : ";
    //Saving user-input
	cin>>num3;
	
	//If Condition is true
	if(num1<(num2+num3) && num2<(num1+num3) && num3<(num1+num2)){
		//Calculation of perimeter of triangle
		int perimeter=num1+num2+num3;
		//printing result
		
		cout<<"Peremeter of triangle is : "<<perimeter;
	}
	
	//If condition is false
	else{
		cout<<"user-input is invalid.";
	}
	
	return 0;
}
