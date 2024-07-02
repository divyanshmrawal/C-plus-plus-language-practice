//QUESTION-->
//Write a C program that reads the two adjoining sides and the diagonal of a parallelogram and checks whether the parallelogram is a rectangle or a rhombus

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	//Variable declaration
	//x=one of the side of figure,y=adjecent side of figure
	int x,y,z;
	
	//Accepting length of sides in figure
	cout<<"Enter length of side : ";
	cin>>x;
	
	cout<<"Enter length of adjecent side : ";
	cin>>y;
	
	cout<<"Enter length of diagonals side : ";
	cin>>z;
	
	//Identifing that figure is square or rectangle
	if(x==y){
		cout<<"parallelogram is square.";
	}
	
	else if(x!=y){
		cout<<"Parallelogram is rectangle.";
	}
	
	return 0;
}
