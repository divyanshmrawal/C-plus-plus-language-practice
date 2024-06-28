//QUESTION-->
//Write a C program to calculate body mass index and display the grade

//ANSWER-->
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//x=height , y=weight , z=BMI
 
    //Variable declaration
	float x,y,z;
	
	//Accepting height and weight from user 
	cout<<"Enter your height in meters : ";
	cin>>x;
	
	cout<<"Enter your weight in kilograms : ";
	cin>>y;
	
	//Finding BMI 
	z=(float)y/pow(x,2);
	
	//condition of BMI
	
  if(z<18.5){
  	cout<<"Under weight";
  }
  
  if(z<25 && z>18.5){
  	cout<<"Healthy weight";
  }
  
  if(z<30 && z>25){
  	cout<<"Overweight";
  }
  
  if(z>30){
  	cout<<"obese";
  }
  
	return 0;
}
