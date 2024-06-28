#include <iostream>

using namespace std;

int main() {
	int i,sum=0,inc=0;
	float avg=0;
   cout<<"Enter your number : ";
   cin>>i;
		while(i!=888){
		sum=sum+i;
		inc++;
		cin>>i;
		}
	
	avg=(float)sum/inc;
	cout<<"Average of numbers : "<<avg;
	return 0;
}
