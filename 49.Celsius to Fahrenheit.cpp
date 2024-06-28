//QUESTION-->
//



#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	cout<<"-->[Convert tempreture from celsius to fahrenheit]<--"<<"\n";
	
	//x=tempreture Entered by user input
	float c,f;
	
	//Accepting Tempreture from user
	cout<<"Enter Tempreture in Celsius : ";
	cin>>c;
	
	//Converting form celsius to fahrenheit
	f=(float)((9/5)*c)+32;
	
	//printing tempreture in fahrenheit
	cout<<"Tempreture in Fahrenheit : "<<f<<"\n";
	
    cout<<"--------------------------------------------------------------------"<<"\n";//------------------------------------------------------------------------------------------------------------------------
	
	
	cout<<"-->[Convert tempreture from fahrenheit to celsius]<--"<<"\n"<<"\n";
	
	float c2,f2;
	
	//Accepting Tempreture form user
	cout<<"Enter Tempreture in Fahrenheit : ";
	cin>>f2;
	
	//Converting form fahrenheit to celsius
	c2=(float)(f2-32)*(5/9);
	
	//printing tempreture in celsius
		cout<<"Tempreture in Celsius : "<<c2<<"\n";
		
	return 0;
}
