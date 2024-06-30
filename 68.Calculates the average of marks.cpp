//QUESTION-->
//Write a C program that reads five subject marks (0-100) of a student and calculates the average of these marks

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	float m1,m2,m3,m4,m5;
	float sum,length,avg;
	
	//Accepting marks of subjects
	cout<<"Marks of subject 1 : ";
	cin>>m1;
	
	cout<<"Marks of subject 2 : ";
	cin>>m2;
	
	cout<<"Marks of subject 3 : ";
	cin>>m3;
	
	cout<<"Marks of subject 4 : ";
	cin>>m4;
	
	cout<<"Marks of subject 5 : ";
	cin>>m5;
	
	//sum of marks
	if(m1,m2,m3,m4,m5>0 && m1,m2,m3,m4,m5<100){
	sum=m1+m2+m3+m4+m5;
	length=5;	
}

//Calculating average of marks
avg=(float)sum/length;

//printing result of average
cout<<"Average of marks : "<<avg;

	return 0;
}
