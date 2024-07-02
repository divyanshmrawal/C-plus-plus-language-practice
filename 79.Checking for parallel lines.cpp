//QUESTION-->
//.Write a C program to test whether two lines are parallel or not. The four points are P(x1, y1), Q(x2, y2), R(x3, y3) and S(x4, y4), check PQ and RS are parallel are not

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	int x1,y1,x2,y2,x3,y3,x4,y4,slope1,slope2;
	
	//Accepting points of lines
	cout<<"Enter value of x1 : ";
	cin>>x1;
	cout<<"Enter value of y1 : ";
	cin>>y1;
	
	cout<<"Enter value of x2 : ";
	cin>>x2;
	cout<<"Enter value of y2 : ";
	cin>>y2;
	
	cout<<"Enter value of x3 : ";
	cin>>x3;
	cout<<"Enter value of y3 : ";
	cin>>y3;
	
	cout<<"Enter value of x4 : ";
	cin>>x4;
	cout<<"Enter value of y4 : ";
	cin>>y4;
	
	//Calculating slopes of lines
	slope1=(y2-y1)/(x2-x1);
	slope2=(y3-y4)/(x3-x4);
	
	//Compare between two slopes of lines
	if(slope1==slope2){
		cout<<"Yes, these two lines are parallel lines.";
	}
	
	else{
		cout<<"No, these two lines are not parallel lines.";
	}
	
	return 0;
}
